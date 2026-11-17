/* f_0x10140ee0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10140ee0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;

    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t3;
        goto L_10140f84;
    }
    ecx = t2;
    edx = t3;
    if (rd32(COW_IMG(0x1057876cu)) == 0u)
    {
        eax = rd32(COW_IMG(0x1057876cu));
        goto L_10140f84;
    }
    eax = rd32(COW_IMG(0x1057876cu));
    if (rd16(COW_IMG(0x10485f7au)) == 0u)
    {
        eax = (eax & 0xffff0000u) | rd16(COW_IMG(0x10485f7au));
        esi = 0u;
    }
    else
    {
        eax = (eax & 0xffff0000u) | rd16(COW_IMG(0x10485f7au));
        esi = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)eax * 4u);
        eax = (uint32_t)(int16_t)eax;
    }
    g->edx = edx;
    g->esp = sp0 - 8u;
    t4 = cow_call_regs(g, COW_IMG(0x10087070u), eax, g->ecx, g->edx, 1, 1, 0u);
    t5 = g->edx;
    if ((uint8_t)t4 != 0u)
    {
        edx = t5;
        goto L_10140f71;
    }
    eax = t4;
    edx = t5;
    if (esi == 0u) goto L_10140f3c;
    if (rd32(esi + 0x170u) == 2u) goto L_10140f71;
    esi = rd32(esi + 0x170u);
    if (esi == 3u) goto L_10140f71;
L_10140f3c: ;
    esi = 1u;
L_10140f41: ;
    g->edi = self;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t6 = cow_thiscall(g, COW_IMG(0x101192b0u), rd32(self + 8u), 2, esi, 0u);
    t7 = g->edx;
    if ((int32_t)(esi + 1u) <= 8)
    {
        eax = t6;
        edx = t7;
        esi = esi + 1u;
        goto L_10140f41;
    }
    eax = t6;
    edx = t7;
    t8 = rd32(self + 0x18u);
    g->eax = eax;
    g->esp = sp0 - 8u;
    t9 = cow_thiscall(g, COW_IMG(0x101410d0u), self, 1, t8);
    t10 = rd32(self + 8u);
    wr8(self + 0x14u, (uint8_t)t9);
    wr8(self + 0x3cu, 1u);
    wr8(t10 + 0x84u, 0u);
    g->edi = in_edi;
    g->edx = t10;
    return t9;
L_10140f71: ;
    t11 = rd32(self + 8u);
    g->edx = edx;
    g->esp = sp0 - 8u;
    t12 = cow_call_regs(g, COW_IMG(0x1015e790u), t11, COW_IMG(0x10621838u), g->edx, 0, 2, t11, 1u);
    t13 = g->edx;
    g->edi = in_edi;
    g->edx = t13;
    return t12;
L_10140f84: ;
    t14 = rd32(self + 8u);
    g->edx = edx;
    g->esp = sp0 - 8u;
    t15 = cow_call_regs(g, COW_IMG(0x1015e790u), eax, COW_IMG(0x10621838u), g->edx, 0, 2, t14, 1u);
    t16 = g->edx;
    g->edi = in_edi;
    g->edx = t16;
    return t15;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10140ee0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10140ee0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
