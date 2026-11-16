/* f_0x1022b330 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1022b330(Guest* g)
{
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg1 >= 0x400u) goto L_1022b3aa;
    if (rd32(COW_IMG(0x10667a74u)) == 0u) goto L_1022b3aa;
    edi = rd32(COW_IMG(0x10667a74u));
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x1021e670u), self, 1, 0x30u);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 != 0u) goto L_1022b3a0;
    ecx = t2;
    edx = t3;
    g->esp = sp0 - 8u;
    t4 = cow_thiscall_cdecl(g, COW_IMG(0x1021e670u), ecx, 1, 0xe6u);
    if ((uint8_t)t4 != 0u) goto L_1022b3a0;
    if (arg2 != 0u) goto L_1022b38c;
    wr16(COW_IMG(0x106671e0u) + arg1 * 2u, (uint16_t)(((arg1 * 0x19u & 0xffff0000u) | rd8(arg1 * 0x64u + edi + 0xdu)) * 0xfu));
    return;
L_1022b38c: ;
    wr16(COW_IMG(0x106671e0u) + arg1 * 2u, (uint16_t)(arg2 * 0x3cu));
    return;
L_1022b3a0: ;
    wr16(COW_IMG(0x106671e0u) + arg1 * 2u, 0u);
L_1022b3aa: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1022b330(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1022b330(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
