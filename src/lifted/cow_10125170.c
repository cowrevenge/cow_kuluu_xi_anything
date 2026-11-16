/* f_0x10125170 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10125170(Guest* g)
{
    double d10;
    double d14;
    double d16;
    double d19;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t15;
    uint32_t t17;
    uint32_t t18;
    uint32_t t2;
    uint32_t t20;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;

    if (rd8(self + 0x4du) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 0x4du);
        goto L_101252a6;
    }
    eax = (in_eax & 0xffffff00u) | rd8(self + 0x4du);
    if ((uint8_t)eax <= 2u) goto L_101251a6;
    if ((uint8_t)eax != 5u) goto L_101252a6;
    if (rd8(self + 0x88u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x88u);
        loc_4 = self;
        goto L_101252ad;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x88u);
    wr8(self + 0x4du, 1u);
    return (eax & 0xffffff00u) | 1u;
L_101251a6: ;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, self, g->edx, 1, 7, 0x3eu, 0x8cu, 4u, 0xffffffffu, in_edi, in_esi, in_ebx);
    t2 = g->ecx;
    t3 = g->edx;
    g->ecx = t2;
    g->edx = t3;
    g->esp = sp0 - 0x10u;
    t4 = cow_stdcall(g, COW_IMG(0x1025e070u), 0);
    t5 = g->ecx;
    t6 = g->edx;
    if ((uint8_t)t4 == 0u)
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        ebx = (in_ebx & 0xffffff00u) | (uint8_t)t1;
        edi = 1u;
    }
    else
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        ebx = (in_ebx & 0xffffff00u) | (uint8_t)t1;
        if ((uint8_t)ebx == 0u)
        {
            g->ebx = ebx;
            g->edx = edx;
            g->esp = sp0 - 4u;
            t7 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x3eu, 0x8bu, 4u, 0xffffffffu, in_edi, in_esi, in_ebx);
            t8 = g->ecx;
            t9 = g->edx;
            eax = t7;
            ecx = t8;
            edx = t9;
            ebx = (ebx & 0xffffff00u) | (uint8_t)t7;
        }
        edi = rd32(COW_IMG(0x104e1d48u));
    }
    d10 = (double)rdf32(self + 0x78u);
    if ((cow_fsw(g, d10, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d10, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
        goto L_1012521b;
    }
    eax = cow_fsw(g, d10, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
    if ((uint8_t)ebx == 0u) goto L_1012521b;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t11 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t12 = g->ecx;
    t13 = g->edx;
    d14 = cow_take_float(g);
    fpush(g, d14);
    t15 = cow_call_regs(g, COW_IMG(0x10311c6cu), t11, g->ecx, g->edx, 1, 0);
    d16 = fr(g, (double)rdf32(self + 0x78u) - (double)(int32_t)(uint32_t)(int16_t)t15);
    wrf32(self + 0x78u, (float)d16);
    eax = (uint32_t)(int16_t)t15;
    loc_4 = (uint32_t)(int16_t)t15;
L_10125222: ;
    if ((uint8_t)ebx != 1u) goto L_101252ad;
    if (rd8(edi + self + 0x34u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(edi + self + 0x34u);
        goto L_101252ad;
    }
    t17 = rd32(self + 8u) - rd32(edi * 8u + self + 0x20u);
    t18 = rd32(self + 4u) - rd32(edi * 8u + self + 0x1cu);
    if ((int32_t)(t17 * t17 + t18 * t18) > 64)
    {
        eax = t18;
        ecx = t18 * t18;
        edx = t17 * t17 + t18 * t18;
        goto L_10125266;
    }
    eax = t18;
    ecx = t18 * t18;
    edx = t17 * t17 + t18 * t18;
    d19 = (double)rdf32(self + 0x78u);
    if (!(d19 <= (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d19, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_101252ad;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d19, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
L_10125266: ;
    if (rd8(self + 0x54u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x54u);
        goto L_101252ad;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x54u);
    if (rd8(self + 0x55u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x55u);
        goto L_101252ad;
    }
    g->esp = sp0 - 0x10u;
    t20 = cow_stdcall(g, COW_IMG(0x102394b0u), 0);
    if (t20 != 0u)
    {
        eax = t20;
        goto L_10125291;
    }
    if (rd32(rd32(COW_IMG(0x10456a28u))) == 0x60u)
    {
        eax = rd32(rd32(COW_IMG(0x10456a28u)));
        goto L_10125291;
    }
    eax = rd32(rd32(COW_IMG(0x10456a28u)));
    if (eax != 0xd0u) goto L_101252ad;
L_10125291: ;
    if (rd8(self + 0x88u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x88u);
        goto L_101252ad;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x88u);
    wr8(self + 0x4du, 5u);
    g->ebx = in_ebx;
    return (eax & 0xffffff00u) | 1u;
L_1012521b: ;
    wr32(self + 0x78u, 0x41c80000u);
    loc_4 = self;
    goto L_10125222;
L_101252a6: ;
    wr32(self + 0x78u, 0x41c80000u);
    loc_4 = self;
L_101252ad: ;
    g->ebx = in_ebx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10125170(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10125170(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
