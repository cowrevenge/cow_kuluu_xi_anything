/* f_0x1007ee90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1007ee90(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->ecx = self;
    g->edx = in_edx;
    t1 = cow_call_regs(g, COW_IMG(0x101cc350u), in_eax, g->ecx, g->edx, 1, 2, 1u, 1u);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        ecx = t2;
        edx = t3;
        goto L_1007eeb5;
    }
    eax = t1;
    edx = t3;
    g->edx = edx;
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, 0xa7u);
    t4 = g->edx;
    g->edx = t4;
    return arg3;
L_1007eeb5: ;
    if (rd32(rd32(COW_IMG(0x10456a28u))) != 0x60u) goto L_1007eee4;
    eax = rd32(COW_IMG(0x10456a28u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t5 = cow_stdcall(g, COW_IMG(0x100fc510u), 0);
    t6 = g->edx;
    if (t5 != 0u)
    {
        eax = t5;
        goto L_1007eecf;
    }
    edx = t6;
    g->edx = edx;
    return -arg3;
L_1007eecf: ;
    t7 = rd32(eax + 4u);
    g->edx = rd32(eax);
    t8 = rd32(eax);
    g->esp = sp0;
    cow_cdecl(g, COW_IMG(0x100780a0u), 5, t8, t7, 0x15u, 0u, 0u);
    t9 = g->edx;
    edx = t9;
L_1007eee4: ;
    g->edx = edx;
    return arg3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1007ee90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1007ee90(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
