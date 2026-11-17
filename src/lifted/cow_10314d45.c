/* f_0x10314d45 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   Calls FUN_10318c9e with a pointer to a local initialized from arg0, then decrements a local counter; if the counter becomes negative it calls FUN_10318b86(0, &local), otherwise it clears the first byt

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=4 */
uint32_t cow_fn_10314d45(Guest* g, uint32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3)
{
    const uint32_t sp0 = g->esp;
    const uint32_t saved_esi = g->esi;
    const uint32_t saved_ebp = g->ebp;

    /*
       Original frame:
         push ebp                 esp = sp0 - 4
         mov ebp, esp             ebp = sp0 - 4
         sub esp, 0x20            esp = sp0 - 0x24
         push esi                 esp = sp0 - 0x28

       Therefore:
         [ebp - 0x20] = sp0 - 0x24
         [ebp - 0x1c] = sp0 - 0x20
         [ebp - 0x18] = sp0 - 0x1c
         [ebp - 0x14] = sp0 - 0x18

       Only [ebp - 0x20] escapes to callees, but reserve the whole original local area
       to keep the callee-visible stack address exact.
    */
    const uint32_t frame = cow_frame(g, sp0, 0x28u);

    /* frame is expected to be sp0 - 0x28. */
    const uint32_t local_20 = frame + 0x04u;  /* [ebp - 0x20] = sp0 - 0x24 */
    const uint32_t local_1c = frame + 0x08u;  /* [ebp - 0x1c] = sp0 - 0x20 */
    const uint32_t local_18 = frame + 0x0cu;  /* [ebp - 0x18] = sp0 - 0x1c */
    const uint32_t local_14 = frame + 0x10u;  /* [ebp - 0x14] = sp0 - 0x18 */

    /* 10314d4b: mov eax, [ebp + 8] */
    /* 10314d52: mov [ebp - 0x18], eax */
    /* 10314d55: mov [ebp - 0x20], eax */
    wr32(local_18, arg0);
    wr32(local_20, arg0);

    /* 10314d58: mov eax, [ebp + 0xc] */
    /* 10314d5e: mov [ebp - 0x1c], eax */
    wr32(local_1c, arg1);

    /* 10314d64: mov dword ptr [ebp - 0x14], 0x42 */
    wr32(local_14, 0x42u);

    /*
       10314d4f: push [ebp + 0x14]  -> arg3
       10314d5b: push [ebp + 0x10]  -> arg2
       10314d6b: push eax           -> &local_20
       call 0x10318c9e
       add esp, 0xc

       Cdecl source order is last pushed first:
         FUN_10318c9e(&local_20, arg2, arg3)
    */
    cow_cdecl(g, COW_IMG(0x10318c9eu), 3u, local_20, arg2, arg3);

    /* 10314d77: mov esi, eax */
    const uint32_t result = g->eax;
    const uint32_t edx_after_first_call = g->edx;

    /* 10314d74: dec dword ptr [ebp - 0x1c] */
    const uint32_t old_count = rd32(local_1c);
    const uint32_t new_count = old_count - 1u;
    wr32(local_1c, new_count);

    /*
       10314d79: js 0x10314d83
       js uses SF from dec, i.e. signed test on new_count.
    */
    if ((int32_t)new_count < 0)
    {
        /*
           10314d83: lea eax, [ebp - 0x20]
           10314d86: push eax
           10314d87: push 0
           10314d89: call 0x10318b86
           10314d8e: pop ecx
           10314d8f: pop ecx

           Cdecl source order:
             FUN_10318b86(0, &local_20)
        */
        cow_cdecl(g, COW_IMG(0x10318b86u), 2u, 0u, local_20);

        /*
           edx is whatever the second call left there.
           ecx is not compared here; the original only pops it twice.
        */
    }
    else
    {
        /*
           10314d7b: mov eax, [ebp - 0x20]
           10314d7e: and byte ptr [eax], 0

           Read the pointer after FUN_10318c9e may have modified local_20.
           and [eax], 0 is equivalent to storing zero into that byte.
        */
        const uint32_t ptr = rd32(local_20);
        wr8(ptr, 0u);

        /* No second call, so preserve edx from after the first call. */
        g->edx = edx_after_first_call;
    }

    /* 10314d90: mov eax, esi */
    /* 10314d92: pop esi */
    /* 10314d93: leave */
    g->esi = saved_esi;
    g->ebp = saved_ebp;

    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10314d45(Guest* g)
{
    const uint32_t sp0 = g->esp;

    const uint32_t arg0 = rd32(sp0 + 4u);
    const uint32_t arg1 = rd32(sp0 + 8u);
    const uint32_t arg2 = rd32(sp0 + 12u);
    const uint32_t arg3 = rd32(sp0 + 16u);

    const uint32_t result = cow_fn_10314d45(g, arg0, arg1, arg2, arg3);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
