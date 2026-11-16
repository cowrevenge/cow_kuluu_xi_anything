/* f_0x1014aae0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1014aae0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint32_t)(int16_t)arg1 == 3u) goto L_1014ab8d;
    if ((uint32_t)(int16_t)arg1 == 4u) goto L_1014ab55;
    if ((uint32_t)(int16_t)arg1 - 4u != 5u)
    {
        eax = (uint32_t)(int16_t)arg1 - 9u;
        edx = in_edx;
        goto L_1014ab23;
    }
    if (rd16(rd32(COW_IMG(0x104e1d4cu)) + 0x52u) == 0xbu)
    {
        eax = (rd32(COW_IMG(0x104e1d4cu)) & 0xffff0000u) | rd16(rd32(COW_IMG(0x104e1d4cu)) + 0x52u);
        goto L_1014ab35;
    }
    eax = (rd32(COW_IMG(0x104e1d4cu)) & 0xffff0000u) | rd16(rd32(COW_IMG(0x104e1d4cu)) + 0x52u);
    if ((uint16_t)eax == 0xcu) goto L_1014ab35;
    if (rd32(self + 8u) == 0u)
    {
        eax = rd32(self + 8u);
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 8u);
        wr8(eax + 0x62u, 1u);
        t1 = rd32(self + 8u);
        wr8(t1 + 0x61u, 1u);
        edx = t1;
    }
L_1014ab23: ;
    g->edi = arg1;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t14 = cow_thiscall(g, COW_IMG(0x101f6c70u), self, 2, arg1, arg2);
    t15 = g->edx;
    eax = t14;
    edx = t15;
L_1014ab30: ;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
L_1014ab35: ;
    if (rd32(self + 8u) == 0u)
    {
        edx = in_edx;
        goto L_1014ab30;
    }
    ecx = rd32(self + 8u);
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x10118e90u), eax, ecx, g->edx, 0, 1, eax);
    t2 = g->edx;
    t3 = rd32(self + 8u);
    wr8(t3 + 0x62u, 0u);
    wr8(rd32(self + 8u) + 0x61u, 0u);
    g->edx = t2;
    return t3;
L_1014ab55: ;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t4 = cow_call_regs(g, COW_IMG(0x10123a70u), (uint32_t)(int16_t)arg1 - 4u, self, g->edx, 1, 4, 0x3eu, 0xa8u, 4u, 0xffffffffu);
    t5 = g->ecx;
    t6 = g->edx;
    if ((uint8_t)t4 == 0u)
    {
        eax = t4;
        edx = t6;
        goto L_1014ab23;
    }
    ecx = t5;
    edx = t6;
    if (rd32(self + 8u) == 0u)
    {
        eax = rd32(self + 8u);
        goto L_1014ab7a;
    }
    eax = rd32(self + 8u);
    if (rd8(eax + 0x62u) == 0u) goto L_1014ab30;
L_1014ab7a: ;
    g->edi = arg1;
    g->eax = eax;
    g->edx = arg2;
    g->esp = sp0 - 8u;
    t7 = cow_thiscall(g, COW_IMG(0x101f6c70u), self, 2, 0x18u, arg2);
    t8 = g->edx;
    g->edi = in_edi;
    g->edx = t8;
    return t7;
L_1014ab8d: ;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t9 = cow_call_regs(g, COW_IMG(0x10123a70u), (uint32_t)(int16_t)arg1 - 3u, self, g->edx, 1, 4, 0x3eu, 0xa8u, 4u, 0xffffffffu);
    t10 = g->ecx;
    t11 = g->edx;
    if ((uint8_t)t9 == 0u)
    {
        eax = t9;
        edx = t11;
        goto L_1014ab23;
    }
    ecx = t10;
    edx = t11;
    if (rd32(self + 8u) == 0u) goto L_1014abba;
    eax = rd32(self + 8u);
    if (rd8(eax + 0x62u) == 0u) goto L_1014ab30;
L_1014abba: ;
    g->edi = arg1;
    g->eax = arg2;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t12 = cow_thiscall(g, COW_IMG(0x101f6c70u), self, 2, 0x19u, arg2);
    t13 = g->edx;
    g->edi = in_edi;
    g->edx = t13;
    return t12;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1014aae0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1014aae0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
