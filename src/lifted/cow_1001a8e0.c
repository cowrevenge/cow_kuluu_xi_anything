/* f_0x1001a8e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1001a8e0(Guest* g)
{
    double d14;
    double d15;
    double d21;
    double d24;
    double d25;
    double d26;
    double d34;
    double d35;
    double d36;
    double d37;
    double d38;
    double d39;
    double d45;
    double d46;
    double d47;
    double d7;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    double loc_4_f;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t22;
    uint32_t t23;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t5;
    uint32_t t6;
    uint32_t t8;
    uint32_t t9;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    if (rd32(self + 0x34u) == 0u)
    {
        eax = rd32(self + 0x34u);
        edx = in_edx;
        goto L_1001ab4e;
    }
    eax = rd32(self + 0x34u);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_thiscall(g, COW_IMG(0x10071060u), self + 0x34u, 0);
    t2 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
        edx = t2;
        goto L_1001ab4e;
    }
    edx = t2;
    t3 = rd32(self + 0x34u);
    wr32(sp0 - 0x18u, t3);
    g->eax = t3;
    g->esp = sp0 - 0x14u;
    t4 = cow_stdcall(g, COW_IMG(0x10072fb0u), 1, t3);
    t5 = (uint32_t)(int16_t)rd16(t4 + 0x34u);
    wr32(sp0 - 8u, t5);
    t6 = rd32(self + 0x24u);
    wr32(sp0 - 8u, t6);
    wrf32(sp0 - 0xcu, (float)(double)(float)(double)(int32_t)t5);
    d7 = (double)rdf32(self + 0x38u);
    if ((cow_fsw(g, d7, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) != 0u)
    {
        edx = t6;
        loc_8 = t6;
    }
    else
    {
        edx = t6;
        loc_8 = t6;
        t8 = rd32(self + 0x38u);
        wr32(sp0 - 0xcu, t8);
    }
    if ((int32_t)rd32(self + 0x2cu) < 0)
    {
        eax = rd32(self + 0x2cu);
        goto L_1001ab4e;
    }
    eax = rd32(self + 0x2cu);
    t9 = rd32(self + 0x34u);
    wr32(sp0 - 0x18u, t9);
    g->eax = eax;
    g->ecx = rd32(COW_IMG(0x1047d128u));
    g->edx = edx;
    t10 = rd32(COW_IMG(0x1047d128u));
    g->esp = sp0 - 0x14u;
    t11 = cow_stdcall(g, COW_IMG(0x10072fb0u), 1, t9);
    t12 = g->ecx;
    t13 = g->edx;
    d14 = (double)(float)fr(g, fr(g, (double)rdf32(t11 + 0x36u) * (double)rdf32(COW_IMG(0x10329a08u))) * (double)rdf32(self + 0x28u));
    wrf32(sp0 - 4u, (float)d14);
    d15 = (double)rdf32(sp0 - 0xcu);
    if (d15 != (double)rdf32(COW_IMG(0x10329990u)))
    {
        eax = (t11 & 0xffff0000u) | (uint16_t)cow_fsw(g, d15, (double)rdf32(COW_IMG(0x10329990u)), 0u);
        ecx = t12;
        edx = t13;
        loc_4_f = d14;
        goto L_1001a9ab;
    }
    eax = (t11 & 0xffff0000u) | (uint16_t)cow_fsw(g, d15, (double)rdf32(COW_IMG(0x10329990u)), 0u);
    loc_4_f = d14;
    t16 = rd32(self + 0x34u);
    wr32(sp0 - 0x18u, t16);
    g->eax = eax;
    g->ecx = rd32(COW_IMG(0x1047d128u));
    g->edx = t16;
    t17 = rd32(COW_IMG(0x1047d128u));
    g->esp = sp0 - 0x14u;
    t18 = cow_stdcall(g, COW_IMG(0x10072fb0u), 1, t16);
    t19 = g->ecx;
    t20 = g->edx;
    d21 = fr(g, (double)rdf32(t18 + 0x36u) * (double)rdf32(COW_IMG(0x10329a08u)));
    if (d21 != (double)rdf32(COW_IMG(0x10329a08u)))
    {
        eax = (t18 & 0xffff0000u) | (uint16_t)cow_fsw(g, d21, (double)rdf32(COW_IMG(0x10329a08u)), 0u);
        ecx = t19;
        edx = t20;
        goto L_1001a9ab;
    }
    eax = (t18 & 0xffff0000u) | (uint16_t)cow_fsw(g, d21, (double)rdf32(COW_IMG(0x10329a08u)), 0u);
    edx = t20;
    x0 = fr(g, (double)rdf32(self + 0x24u) + (double)rdf32(COW_IMG(0x1032961cu)));
L_1001a9b7: ;
    wrf32(self + 0x24u, (float)x0);
    d25 = (double)rdf32(self + 0x24u);
    d26 = (double)rdf32(sp0 - 0xcu);
    if ((cow_fsw(g, d25, d26, 0u) & 0x100u) != 0u)
    {
        eax = cow_fsw(g, d25, d26, 0u) & 0x100u;
        goto L_1001aa85;
    }
    if ((int32_t)rd32(self + 0x2cu) <= 0)
    {
        eax = rd32(self + 0x2cu);
        goto L_1001aa35;
    }
    eax = rd32(self + 0x2cu);
    wr32(self + 0x2cu, eax - 1u);
    if (eax != 1u)
    {
        eax = eax - 1u;
        goto L_1001aa35;
    }
    wr32(self + 0x2cu, 0xffffffffu);
    if ((int32_t)arg2 < 3) goto L_1001aa0a;
    g->eax = arg2;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t27 = cow_thiscall(g, COW_IMG(0x1001b590u), self, 0);
    t28 = g->edx;
    t29 = rd32(sp0 - 8u);
    wr32(self + 0x28u, 0u);
    wr32(self + 0x24u, t29);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->edx = t28;
    return t27;
L_1001a9ab: ;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t22 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t23 = g->edx;
    d24 = cow_take_float(g);
    eax = t22;
    edx = t23;
    x0 = fr(g, fr(g, d24 * (double)rdf32(sp0 - 4u)) + (double)rdf32(self + 0x24u));
    goto L_1001a9b7;
L_1001aa0a: ;
    if (rd32(self + 4u) != 0u)
    {
        eax = rd32(self + 4u);
    }
    else
    {
        wr32(sp0 - 0x18u, 1u);
        g->eax = rd32(arg1);
        g->edx = edx;
        t30 = rd32(arg1);
        g->esp = sp0 - 0x14u;
        t31 = cow_thiscall(g, rd32(t30 + 0x1fcu), arg1, 1, 1u);
        t32 = g->edx;
        eax = t31;
        edx = t32;
    }
    t33 = rd32(sp0 - 8u);
    wr32(self + 0x28u, 0u);
    wr32(self + 0x24u, t33);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->edx = edx;
    return eax;
L_1001aa35: ;
    d34 = (double)rdf32(sp0 - 0xcu);
    if (!(d34 <= (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d34, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_1001aa55;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d34, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    wr32(self + 0x24u, 0u);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->edx = edx;
    return eax;
L_1001aa55: ;
    d35 = (double)rdf32(self + 0x24u);
    d36 = (double)rdf32(sp0 - 0xcu);
    if ((cow_fsw(g, d35, d36, 1u) & 0x100u) != 0u)
    {
        eax = cow_fsw(g, d35, d36, 1u) & 0x100u;
        x0 = d35;
        goto L_1001ab4c;
    }
    eax = cow_fsw(g, d35, d36, 1u) & 0x100u;
    x0 = d35;
L_1001aa69: ;
    d37 = fr(g, x0 - (double)rdf32(sp0 - 0xcu));
    d38 = (double)rdf32(sp0 - 0xcu);
    if ((cow_fsw(g, d37, d38, 1u) & 0x100u) == 0u)
    {
        eax = cow_fsw(g, d37, d38, 1u) & 0x100u;
        x0 = d37;
        goto L_1001aa69;
    }
    eax = cow_fsw(g, d37, d38, 1u) & 0x100u;
    x0 = d37;
    wrf32(self + 0x24u, (float)x0);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->edx = edx;
    return eax;
L_1001aa85: ;
    d39 = (double)rdf32(self + 0x24u);
    if (!(d39 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d39, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_1001ab4e;
    }
    if ((int32_t)rd32(self + 0x2cu) <= 0)
    {
        eax = rd32(self + 0x2cu);
        goto L_1001ab00;
    }
    eax = rd32(self + 0x2cu);
    wr32(self + 0x2cu, eax - 1u);
    if (eax != 1u)
    {
        eax = eax - 1u;
        goto L_1001ab00;
    }
    wr32(self + 0x2cu, 0xffffffffu);
    if ((int32_t)arg2 < 3) goto L_1001aad5;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, COW_IMG(0x1001b590u), self, 0);
    t40 = g->edx;
    t41 = rd32(sp0 - 8u);
    wr32(self + 0x28u, 0u);
    wr32(self + 0x24u, t41);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->edx = t40;
    return t41;
L_1001aad5: ;
    if (rd32(self + 4u) == 0u)
    {
        eax = rd32(self + 4u);
        wr32(sp0 - 0x18u, 1u);
        g->edx = rd32(arg1);
        t42 = rd32(arg1);
        g->esp = sp0 - 0x14u;
        cow_thiscall(g, rd32(t42 + 0x1fcu), arg1, 1, 1u);
        t43 = g->edx;
        edx = t43;
    }
    t44 = rd32(sp0 - 8u);
    wr32(self + 0x28u, 0u);
    wr32(self + 0x24u, t44);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->edx = edx;
    return t44;
L_1001ab00: ;
    d45 = (double)rdf32(sp0 - 0xcu);
    if (!(d45 <= (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d45, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_1001ab20;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d45, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    wr32(self + 0x24u, 0x3f800000u);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->edx = edx;
    return eax;
L_1001ab20: ;
    d46 = (double)rdf32(self + 0x24u);
    if (!(d46 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d46, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = d46;
        goto L_1001ab4c;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d46, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
    x0 = d46;
L_1001ab30: ;
    d47 = fr(g, x0 + (double)rdf32(sp0 - 0xcu));
    if (d47 < (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d47, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = d47;
        goto L_1001ab30;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d47, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
    x0 = d47;
    wrf32(self + 0x24u, (float)x0);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->edx = edx;
    return eax;
L_1001ab4c: ;
L_1001ab4e: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1001a8e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1001a8e0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
