/* f_0x102a61a0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   dumps a MIP map header by printing fixed labels and selected fields from the header structure.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_102a61a0(Guest* g, uint32_t sp0, uint32_t param1, uint32_t param2)
{
    const uint32_t entry_ebx = g->ebx;
    const uint32_t entry_esi = g->esi;
    const uint32_t entry_edi = g->edi;

    uint32_t esp = sp0;

    /* 102a61a0: push ebx */
    esp -= 4u;
    wr32(esp, entry_ebx);

    /* 102a61a1: push esi */
    esp -= 4u;
    wr32(esp, entry_esi);

    /* 102a61a2: push edi */
    esp -= 4u;
    wr32(esp, entry_edi);

    /*
       The original leaves all arguments pushed until the single
       add esp, 0x14 after the third call.  cow_cdecl pops its own
       arguments, so after each call we restore esp to the original
       post-call value (with the arguments still logically present).
    */

    /* 102a61a3: push 0x103be114 */
    /* 102a61a8: call 0x102858b0 */
    g->esp = esp;
    cow_cdecl(g, COW_IMG(0x102858b0u), 1u, COW_IMG(0x103be114u));

    /* Original after bare callee ret: first argument is still on the stack. */
    esp -= 4u;

    /* 102a61ad: mov edi, dword ptr [esp + 0x14] */
    uint32_t edi = rd32(esp + 0x14u);

    /* 102a61b1: xor eax, eax */
    /* 102a61b3: mov al, byte ptr [edi] */
    uint32_t eax = rd8(edi);
    g->eax = eax;

    /* 102a61b5: push eax */
    /* 102a61b6: push 0x103be0fc */
    /* 102a61bb: call 0x102858b0 */
    g->esp = esp;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2u, COW_IMG(0x103be0fcu), eax);

    /* Original after bare callee ret: eax and the string are still on the stack. */
    esp -= 8u;

    /* 102a61c0: xor ecx, ecx */
    /* 102a61c2: mov cl, byte ptr [edi + 8] */
    uint32_t ecx = rd8(edi + 8u);
    g->ecx = ecx;

    /* 102a61c5: push ecx */
    /* 102a61c6: push 0x103be0e4 */
    /* 102a61cb: call 0x102858b0 */
    g->esp = esp;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2u, COW_IMG(0x103be0e4u), ecx);

    /* Original after bare callee ret: ecx and the string are still on the stack. */
    esp -= 8u;

    /* 102a61d0: mov ebx, dword ptr [esp + 0x28] */
    uint32_t ebx = rd32(esp + 0x28u);

    /* 102a61d4: add esp, 0x14 */
    esp += 0x14u;

    /* 102a61d7: xor esi, esi */
    uint32_t esi = 0u;

    /* 102a61d9: test ebx, ebx */
    /* 102a61db: jle 0x102a61f9 */
    if ((int32_t)ebx > 0)
    {
        /* 102a61dd: add edi, 0x10 */
        edi += 0x10u;

        for (;;)
        {
            /* 102a61e0: mov edx, dword ptr [edi] */
            uint32_t edx = rd32(edi);
            g->edx = edx;

            /*
               102a61e2: push edx
               102a61e3: push esi
               102a61e4: push 0x103be0d0
               102a61e9: call 0x102858b0
               102a61ee: add esp, 0xc
            */
            g->esp = esp;
            cow_cdecl(g, COW_IMG(0x102858b0u), 3u, COW_IMG(0x103be0d0u), esi, edx);

            /* cow_cdecl has already popped the three arguments, matching add esp, 0xc. */

            /* 102a61f1: inc esi */
            ++esi;

            /* 102a61f2: add edi, 4 */
            edi += 4u;

            /* 102a61f5: cmp esi, ebx */
            /* 102a61f7: jl 0x102a61e0 */
            if ((int32_t)esi >= (int32_t)ebx)
            {
                break;
            }
        }
    }

    /*
       102a61f9: pop edi
       102a61fa: pop esi
       102a61fb: pop ebx
       102a61fc: ret

       The callee-saved registers are restored to their entry values.
       eax and edx are whatever the last executed FUN_102858b0 call left
       in them; if the loop was not taken, that is the third call.
    */
    g->ebx = entry_ebx;
    g->esi = entry_esi;
    g->edi = entry_edi;

    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102a61a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param1 = rd32(sp0 + 4u);
    const uint32_t param2 = rd32(sp0 + 8u);

    const uint32_t result = cow_fn_102a61a0(g, sp0, param1, param2);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
