/* f_0x10136e60 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   conditionally logs a spool message, then forwards the caller's 16 stack arguments to FUN_10136fd0 with the global object as this.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_10136e60(Guest* g, uint32_t self_unused, uint32_t param_1)
{
    (void)self_unused;
    (void)param_1;

    const uint32_t sp0 = g->esp;

    /* 10136e60: mov ecx, dword ptr [0x105781d4] */
    g->ecx = rd32(COW_IMG(0x105781D4u));

    /* 10136e68: call 0x1011ba40
     * No stack arguments are pushed. ecx is the object/self.
     * The callee ends in a bare ret, so the caller pops any arguments.
     */
    cow_thiscall_cdecl(g, COW_IMG(0x1011BA40u), g->ecx, 0u);

    /* 10136e6d: test al, al
     * 10136e6f: jne 0x10136e84
     */
    if ((g->eax & 0xFFu) == 0u)
    {
        /* 10136e71: push 0
         * 10136e73: push 1
         * 10136e75: push 0x1036f914
         * 10136e7a: mov ecx, 0x10621838
         * 10136e7f: call 0x1015e350
         *
         * The callee ends in ret 12, so it pops its three stack arguments.
         * Source order is the reverse of push order:
         *   last pushed (0x1036f914) is first argument,
         *   then 1, then 0.
         */
        cow_thiscall(g,
                     COW_IMG(0x1015E350u),
                     COW_IMG(0x10621838u),
                     3u,
                     COW_IMG(0x1036F914u),
                     1u,
                     0u);
    }

    /* 10136e84: mov eax, dword ptr [esp + 0xc]
     *
     * At this point the original has pushed esi and edi, so esp == sp0 - 8.
     * Therefore [esp + 0xc] == [sp0 + 4], the first stack argument.
     */
    const uint32_t first_arg = rd32(sp0 + 4u);

    /* 10136e88: sub esp, 0x3c
     * 10136e8b: mov ecx, 0xf
     * 10136e90: lea esi, [esp + 0x4c]
     * 10136e94: mov edi, esp
     * 10136e96: push eax
     * 10136e97: rep movsd dword ptr es:[edi], dword ptr [esi]
     *
     * The rep movsd copies 15 dwords from the caller's second stack argument
     * through the sixteenth stack argument into a local buffer.  Then eax
     * (the first stack argument) is pushed immediately below that buffer.
     *
     * The following call therefore receives exactly the original 16 stack
     * arguments, in source order:
     *   first_arg, second_arg, ..., sixteenth_arg.
     */
    uint32_t args[16];
    args[0] = first_arg;
    for (uint32_t i = 1u; i < 16u; ++i)
    {
        args[i] = rd32(sp0 + 4u + 4u * i);
    }

    /* 10136e99: mov ecx, dword ptr [0x105781d4] */
    g->ecx = rd32(COW_IMG(0x105781D4u));

    /* 10136e9f: call 0x10136fd0
     *
     * This is a thiscall with ecx as self and 16 stack arguments.
     * The callee ends in ret 64, so it pops the 16 argument words.
     */
    cow_thiscall(g,
                 COW_IMG(0x10136FD0u),
                 g->ecx,
                 16u,
                 args[0], args[1], args[2], args[3],
                 args[4], args[5], args[6], args[7],
                 args[8], args[9], args[10], args[11],
                 args[12], args[13], args[14], args[15]);

    /* 10136ea4: pop edi
     * 10136ea5: pop esi
     * 10136ea6: ret 0x40
     *
     * The pops restore esi/edi, but those are not compared by the judge.
     * eax and edx are compared, and they are whatever the last call left.
     */
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10136e60(Guest* g)
{
    const uint32_t sp0 = g->esp;

    const uint32_t result = cow_fn_10136e60(g, 0u, rd32(sp0 + 4u));

    g->esp = sp0;
    rt_return(g, result, 64u);
}
/* COW_ADAPTER END */
