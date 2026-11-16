/* f_0x101de5b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101de5b0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 124u);

    wr32(sp0 - 0x58u, in_esi);
    if ((int32_t)arg1 <= 0) goto L_101de629;
    wr32(sp0 - 0x5cu, in_edi);
    edi = sp0 - 0x54u;
    eax = 0u;
    ecx = 0x15u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x60u, sp0 - 0x54u);
    t1 = rd32(COW_IMG(0x10663478u));
    t2 = rd32(COW_IMG(0x1066347cu));
    wr16(sp0 - 0x4cu, 0x5eu);
    wr32(sp0 - 0x48u, (uint16_t)t1);
    wr32(sp0 - 0x44u, arg1);
    wr32(sp0 - 0x40u, t2 * arg1);
    g->edx = sp0 - 0x54u;
    g->esp = sp0 - 0x5cu;
    cow_cdecl(g, COW_IMG(0x100a1ab0u), 1, sp0 - 0x54u);
    t3 = g->edx;
    t4 = rd32(COW_IMG(0x10664510u));
    wr16(COW_IMG(0x1066347au), (uint16_t)arg1);
    wr32(sp0 - 0x60u, 0u);
    wr32(sp0 - 0x64u, 1u);
    wr32(sp0 - 0x68u, 0u);
    wr32(sp0 - 0x6cu, 0u);
    wr32(sp0 - 0x70u, 0u);
    wr32(sp0 - 0x74u, arg2);
    wr32(sp0 - 0x78u, COW_IMG(0x101de640u));
    g->eax = arg2;
    g->edx = t3;
    t5 = cow_thiscall(g, COW_IMG(0x10210e30u), t4, 7, COW_IMG(0x101de640u), arg2, 0u, 0u, 0u, 1u, 0u);
    t6 = g->edx;
    g->edx = t6;
    return t5;
L_101de629: ;
    wr32(sp0 - 0x5cu, 0u);
    wr32(sp0 - 0x60u, 0u);
    g->edx = in_edx;
    g->esp = sp0 - 0x58u;
    t7 = cow_call_regs(g, COW_IMG(0x101de640u), in_eax, g->ecx, g->edx, 1, 2, 0u, 0u);
    t8 = g->edx;
    g->edx = t8;
    return t7;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101de5b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101de5b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
