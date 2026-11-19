/* f_0x10067cd0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   concatenates the string at self+4 and the supplied string into a local buffer, then calls FUN_100679e0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10067cd0(Guest* g, uint32_t self, uint32_t param_2, uint32_t sp0)
{
    const uint32_t buf = cow_frame(g, sp0, 0x400u);

    /*
       10067cdf: mov eax, dword ptr [ebx + 4]
       10067ce3: sub edx, eax
       10067ce5: mov cl, byte ptr [eax]
       10067ce7: mov byte ptr [edx + eax], cl
       10067cea: inc eax
       10067ceb: test cl, cl
       10067ced: jne 0x10067ce5

       Copy the NUL-terminated string at [self + 4] to buf, including the NUL.
    */
    {
        uint32_t src = rd32(self + 4u);
        uint32_t dst = buf;

        for (;;)
        {
            const uint32_t c = rd8(src);
            wr8(dst, c);
            ++src;
            ++dst;
            if (c == 0u)
                break;
        }
    }

    /*
       10067cf6: or ecx, 0xffffffff
       10067cf9: xor eax, eax
       10067cff: repne scasb al, byte ptr es:[edi]
       10067d01: not ecx
       10067d03: sub edi, ecx
       10067d05: mov esi, edi
       10067d07: mov ebp, ecx

       repne scasb consumes the matching byte as well, so if param_2 has
       length L characters before its NUL, ecx becomes 0xffffffff - (L + 1)
       and ebp becomes L + 1.
    */
    uint32_t param_len_incl_nul;
    {
        uint32_t edi = param_2;
        uint32_t ecx = 0xFFFFFFFFu;

        while (ecx != 0u)
        {
            const uint32_t c = rd8(edi);
            ++edi;
            --ecx;
            if (c == 0u)
                break;
        }

        param_len_incl_nul = ~ecx;
    }

    /*
       10067d09: mov edi, edx
       10067d0b: or ecx, 0xffffffff
       10067d0e: repne scasb al, byte ptr es:[edi]
       10067d12: dec edi

       Scan buf for its NUL.  Because repne scasb consumes the NUL, edi is
       then one past the NUL; dec edi points at the NUL, where param_2 is
       appended.
    */
    uint32_t dst;
    {
        uint32_t edi = buf;
        uint32_t ecx = 0xFFFFFFFFu;

        while (ecx != 0u)
        {
            const uint32_t c = rd8(edi);
            ++edi;
            --ecx;
            if (c == 0u)
                break;
        }

        dst = edi - 1u;
    }

    /*
       10067d10: mov ecx, ebp
       10067d13: shr ecx, 2
       10067d16: rep movsd dword ptr es:[edi], dword ptr [esi]
    */
    {
        uint32_t n = param_len_incl_nul >> 2;
        uint32_t src = param_2;

        while (n != 0u)
        {
            wr32(dst, rd32(src));
            dst += 4u;
            src += 4u;
            --n;
        }
    }

    /*
       10067d18: mov ecx, ebp
       10067d1e: and ecx, 3
       10067d22: rep movsb byte ptr es:[edi], byte ptr [esi]
    */
    {
        uint32_t n = param_len_incl_nul & 3u;
        uint32_t src = param_2 + ((param_len_incl_nul >> 2) * 4u);

        while (n != 0u)
        {
            wr8(dst, rd8(src));
            ++dst;
            ++src;
            --n;
        }
    }

    /*
       10067d21: push eax
       10067d24: mov ecx, ebx
       10067d26: call 0x100679e0

       ecx = self, one stack argument = buf, callee pops the argument.
    */
    cow_thiscall(g, COW_IMG(0x100679e0u), self, 1u, buf);

    /*
       10067d2d: mov eax, ebx
    */
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10067cd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10067cd0(g, g->ecx, rd32(sp0 + 4u), sp0);
    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
