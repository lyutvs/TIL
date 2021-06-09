package hello.hellospring.service.hello.hellospring;

import hello.hellospring.doamin.Member;
import hello.hellospring.repository.MemberRepository;
import hello.hellospring.repository.MemoryMemberRepository;

import java.util.Optional;

public class service {

    private final MemberRepository  memberRepository = new MemoryMemberRepository();

    /**
     * 회원 가입
     */
    public Long join(Member member) {
        //같은 이름이 있는 중복 화원X
        memberRepository.findByName(member.getName())
            .ifPresent(m -> {
                    throw new IllegalStateException("이미 존재하는 회원 입니다. ");
        });

        memberRepository.save(member);
        return member.getId();

    }


}
