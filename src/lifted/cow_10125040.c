/* f_0x10125040 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10125040(Guest* g)
{
    double d11;
    double d15;
    double d19;
    double d4;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t10;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t2;
    uint32_t t3;
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
        goto L_10125063;
    }
    eax = (in_eax & 0xffffff00u) | rd8(self + 0x4du);
    if ((uint8_t)eax <= 2u) goto L_10125071;
    if ((uint8_t)eax == 4u)
    {
        if (rd8(self + 0x88u) != 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0x88u);
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0x88u);
            wr8(self + 0x4du, 1u);
        }
    }
L_10125063: ;
    wr32(self + 0x74u, 0x41c80000u);
    loc_4 = self;
L_1012506a: ;
    g->ebx = in_ebx;
    return (eax & 0xffffff00u) | 1u;
L_10125071: ;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_stdcall(g, COW_IMG(0x1025e070u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        ebx = 0u;
        edi = 0x8bu;
    }
    else
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        ebx = 2u;
        edi = 0x96u;
    }
    d4 = (double)rdf32(self + 0x74u);
    if ((cow_fsw(g, d4, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d4, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
        goto L_101250cd;
    }
    eax = cow_fsw(g, d4, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t5 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x3eu, edi, 4u, 0xffffffffu, in_edi, in_esi, in_ebx);
    t6 = g->ecx;
    t7 = g->edx;
    if ((uint8_t)t5 == 0u)
    {
        eax = t5;
        ecx = t6;
        edx = t7;
        goto L_101250cd;
    }
    eax = t5;
    ecx = t6;
    edx = t7;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t8 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t9 = g->ecx;
    t10 = g->edx;
    d11 = cow_take_float(g);
    g->ecx = t9;
    g->edx = t10;
    fpush(g, d11);
    t12 = cow_call_regs(g, COW_IMG(0x10311c6cu), t8, g->ecx, g->edx, 1, 0);
    t13 = g->ecx;
    t14 = g->edx;
    d15 = fr(g, (double)rdf32(self + 0x74u) - (double)(int32_t)(uint32_t)(int16_t)t12);
    wrf32(self + 0x74u, (float)d15);
    eax = (uint32_t)(int16_t)t12;
    ecx = t13;
    edx = t14;
    loc_4 = (uint32_t)(int16_t)t12;
L_101250d4: ;
    g->ebx = ebx;
    g->esp = sp0 - 4u;
    t16 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x3eu, edi, 4u, 0xffffffffu, in_edi, in_esi, in_ebx);
    if ((uint8_t)t16 != 1u)
    {
        eax = t16;
        goto L_1012506a;
    }
    eax = t16;
    if (rd8(ebx + self + 0x34u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(ebx + self + 0x34u);
        goto L_1012506a;
    }
    t17 = rd32(self + 8u) - rd32(ebx * 8u + self + 0x20u);
    t18 = rd32(self + 4u) - rd32(ebx * 8u + self + 0x1cu);
    if ((int32_t)(t17 * t17 + t18 * t18) > 64)
    {
        eax = t18;
        goto L_1012512a;
    }
    eax = t18;
    d19 = (double)rdf32(self + 0x74u);
    if (!(d19 <= (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d19, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_1012506a;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d19, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
L_1012512a: ;
    if (rd8(self + 0x54u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x54u);
        goto L_1012506a;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x54u);
    if (rd8(self + 0x55u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x55u);
        goto L_1012506a;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x55u);
    if (rd32(rd32(COW_IMG(0x10456a28u))) != 0x60u) goto L_1012506a;
    if (rd8(self + 0x88u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x88u);
        goto L_1012506a;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x88u);
    wr8(self + 0x4du, 4u);
    g->ebx = in_ebx;
    return (eax & 0xffffff00u) | 1u;
L_101250cd: ;
    wr32(self + 0x74u, 0x41c80000u);
    loc_4 = self;
    goto L_101250d4;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10125040(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10125040(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
