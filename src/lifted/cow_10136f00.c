/* f_0x10136f00 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 3

   calls a predicate, optionally logs a message, then forwards the caller's 16 stack arguments to a worker via a 15-dword stack copy.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_10136f00(Guest* g, uint32_t sp0)
{
    /*
     * Entry stack:
     *   esp = sp0
     *   [sp0]      = return address
     *   [sp0+4]    = stack arg 0
     *   [sp0+8]    = stack arg 1
     *   ...        = additional stack words copied by rep movsd
     *
     * The function first does:
     *   mov ecx, dword ptr [0x105781d8]
     *   push esi
     *   push edi
     *   call 0x1011ba40
     *
     * After the two pushes and the bare-ret call, esp is sp0 - 8.
     */
    uint32_t ecx = rd32(COW_IMG(0x105781D8u));

    /*
     * FUN_1011ba40:
     *   ecx = this/global object
     *   no stack arguments
     *   bare ret -> caller pops (none), so thiscall-cdecl.
     */
    uint32_t pred = cow_thiscall_cdecl(g, COW_IMG(0x1011BA40u), ecx, 0u);

    if ((pred & 0xFFu) == 0u)
    {
        /*
         * Original optional path:
         *   push 0
         *   push 1
         *   push 0x1036f928
         *   mov ecx, 0x10621838
         *   call 0x1015e350
         *
         * FUN_1015e350 is stdcall and ends in ret 12, so source-order args are:
         *   0x1036f928, 1, 0
         * and ecx = this = 0x10621838.
         */
        cow_thiscall(g,
                     COW_IMG(0x1015E350u),
                     COW_IMG(0x10621838u),
                     3u,
                     COW_IMG(0x1036F928u),
                     1u,
                     0u);
    }

    /*
     * At 0x10136f24, esp == sp0 - 8 in both paths.
     *
     *   mov eax, dword ptr [esp + 0xc]   => eax = [sp0 + 4]
     *   sub esp, 0x3c                    => esp = sp0 - 68
     *   mov ecx, 0xf
     *   lea esi, [esp + 0x4c]            => esi = sp0 + 8
     *   mov edi, esp                     => edi = sp0 - 68
     *   push eax                         => esp = sp0 - 72
     *   rep movsd dword ptr es:[edi], dword ptr [esi]
     *
     * The rep movsd copies 15 dwords:
     *   source: sp0 + 8, sp0 + 12, ..., sp0 + 64
     *   dest:   sp0 - 68, sp0 - 64, ..., sp0 - 12
     *
     * Then:
     *   mov ecx, dword ptr [0x105781d8]
     *   call 0x10136fd0
     *
     * At the call, esp == sp0 - 76.  The callee pops 64 bytes of arguments,
     * so its 16 stack arguments are:
     *   arg  0: [sp0 - 72] = pushed eax = original stack arg 0
     *   arg  1: [sp0 - 68] = copied dword 0  = [sp0 + 8]
     *   arg  2: [sp0 - 64] = copied dword 1  = [sp0 + 12]
     *   ...
     *   arg 15: [sp0 - 12] = copied dword 14 = [sp0 + 64]
     */
    uint32_t eax = rd32(sp0 + 4u);

    ecx = rd32(COW_IMG(0x105781D8u));

    eax = cow_thiscall(g,
                       COW_IMG(0x10136FD0u),
                       ecx,
                       16u,
                       eax,
                       rd32(sp0 + 8u),
                       rd32(sp0 + 12u),
                       rd32(sp0 + 16u),
                       rd32(sp0 + 20u),
                       rd32(sp0 + 24u),
                       rd32(sp0 + 28u),
                       rd32(sp0 + 32u),
                       rd32(sp0 + 36u),
                       rd32(sp0 + 40u),
                       rd32(sp0 + 44u),
                       rd32(sp0 + 48u),
                       rd32(sp0 + 52u),
                       rd32(sp0 + 56u),
                       rd32(sp0 + 60u),
                       rd32(sp0 + 64u));

    /*
     * FUN_10136fd0 leaves esp at sp0 - 8; the original then pops the saved
     * edi and esi and rets 0x40.  The judge compares both eax and edx.
     * eax is whatever the last call left in eax.  edx is whatever the calls
     * above left in g->edx; this function does not explicitly restore edx.
     */
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10136f00(Guest* g)
{
    const uint32_t sp0 = g->esp;

    const uint32_t result = cow_fn_10136f00(g, sp0);

    g->esp = sp0;
    rt_return(g, result, 64u);   /* ret 0x40 */
}
/* COW_ADAPTER END */
