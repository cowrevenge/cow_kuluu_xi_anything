/* f_0x10067bf0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   Copies the string at [this+4] into a stack buffer, appends the second stack argument string, then calls FUN_10067990 with the first stack argument as this and the buffer as its argument, returning the

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10067bf0(Guest* g, uint32_t self, uint32_t arg0, uint32_t arg1, uint32_t sp0)
{
    (void)g;

    /*
       Original stack layout at entry:
         [sp0]      = return address
         [sp0 + 4]  = arg0
         [sp0 + 8]  = arg1

       The original does:
         lea edx, [esp - 0x400]
         sub esp, 0x400
       so the copied buffer starts at sp0 - 0x400 and is passed to the callee.
    */
    const uint32_t buf = cow_frame(g, sp0, 0x400u);
    const uint32_t buf_base = buf;

    /*
       10067bf0: mov eax, dword ptr [ecx + 4]
       10067c02: mov cl, byte ptr [eax]
       10067c04: mov byte ptr [edx + eax], cl
       10067c07: inc eax
       10067c08: test cl, cl
       10067c0a: jne 0x10067c02

       This is a strcpy of *(char **)(self + 4) into buf_base, including the NUL.
    */
    {
        uint32_t src = rd32(self + 4u);
        uint32_t dst = buf_base;

        for (;;)
        {
            uint32_t c = rd8(src);
            wr8(dst, c);
            ++src;
            ++dst;

            if ((c & 0xffu) == 0u)
                break;
        }
    }

    /*
       10067c0f: mov edi, dword ptr [esp + 0x414]
       10067c16: or ecx, 0xffffffff
       10067c19: xor eax, eax
       10067c1b: repne scasb al, byte ptr es:[edi]
       10067c1d: not ecx
       10067c1f: sub edi, ecx
       10067c27: mov ebx, ecx

       ebx = strlen(arg1) + 1, i.e. the number of bytes to append, including NUL.
    */
    uint32_t len1 = 0u;
    {
        uint32_t p = arg1;

        for (;;)
        {
            uint32_t c = rd8(p);
            ++len1;
            ++p;

            if ((c & 0xffu) == 0u)
                break;
        }
    }

    /*
       10067c21: lea edx, [esp + 0xc]
       10067c25: mov esi, edi
       10067c27: mov ebx, ecx
       10067c29: mov edi, edx
       10067c2b: or ecx, 0xffffffff
       10067c2e: repne scasb al, byte ptr es:[edi]
       10067c30: mov ecx, ebx
       10067c32: dec edi

       edi is now buf_base + strlen(buf_base), the NUL position of the first string.
       The following rep movsd / rep movsb copy len1 bytes from arg1 to that position.
    */
    uint32_t dst = buf_base;
    {
        for (;;)
        {
            uint32_t c = rd8(dst);
            ++dst;

            if ((c & 0xffu) == 0u)
                break;
        }

        /*
           The scasb above leaves dst one past the NUL.
           Original dec edi puts the copy destination on the NUL itself.
        */
        --dst;
    }

    {
        uint32_t src = arg1;
        uint32_t n = len1;

        /*
           10067c33: shr ecx, 2
           10067c36: rep movsd dword ptr es:[edi], dword ptr [esi]
           10067c38: mov ecx, ebx
           10067c3e: and ecx, 3
           10067c42: rep movsb byte ptr es:[edi], byte ptr [esi]

           Preserve the original dword-then-byte copy order.
        */
        uint32_t dword_count = n >> 2;
        while (dword_count != 0u)
        {
            wr32(dst, rd32(src));
            dst += 4u;
            src += 4u;
            --dword_count;
        }

        uint32_t byte_count = n & 3u;
        while (byte_count != 0u)
        {
            wr8(dst, rd8(src));
            ++dst;
            ++src;
            --byte_count;
        }
    }

    /*
       10067c44: mov esi, dword ptr [esp + 0x414]
       10067c4b: mov ecx, esi
       10067c4d: call 0x10067990

       At this point the original has pushed the buffer address, so the callee is:
         thiscall FUN_10067990(this = arg0, char *param = buf_base)
       and it pops its one stack argument itself.
    */
    cow_thiscall(g, COW_IMG(0x10067990u), arg0, 1u, buf_base);

    /*
       10067c52: mov eax, esi
       esi was arg0.
    */
    return arg0;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10067bf0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg0 = rd32(sp0 + 4u);
    const uint32_t arg1 = rd32(sp0 + 8u);

    const uint32_t result = cow_fn_10067bf0(g, g->ecx, arg0, arg1, sp0);

    g->esp = sp0;
    rt_return(g, result, 8u);
}
/* COW_ADAPTER END */
