/* f_0x10143cd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10143cd0(Guest* g)
{
    double d17;
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
    uint32_t t16;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;

    if ((uint32_t)(int16_t)rd16(sp0 + 4u) == 5u)
    {
        eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 5u;
        goto L_10143d81;
    }
    eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 5u;
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_10143d13;
    }
    eax = eax - 1u;
    if (eax != 2u)
    {
        eax = eax - 2u;
        edx = in_edx;
        goto L_10143e5b;
    }
    eax = eax - 2u;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10037e90u), self, 0);
    t1 = g->edx;
    t2 = rd32(COW_IMG(0x10578280u));
    wr32(sp0 + 8u, 0u);
    t3 = rd32(t2 + 8u);
    wr32(sp0 + 4u, t3);
    g->esp = sp0;
    g->edx = t1;
    return cow_tailcall(g, COW_IMG(0x1015db80u), t2, COW_IMG(0x10621838u), t1);
L_10143d13: ;
    wr16(COW_IMG(0x105782acu), 0u);
    wr16(COW_IMG(0x1037148cu), 0xffffu);
    wr16(COW_IMG(0x105782aeu), 0u);
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t4 = cow_stdcall(g, COW_IMG(0x10142210u), 0);
    t5 = rd32(rd32(COW_IMG(0x10578204u)) + 8u);
    g->edx = t5;
    t6 = rd32(COW_IMG(0x10578204u));
    t7 = cow_call_regs(g, COW_IMG(0x1015e790u), t4, COW_IMG(0x10621838u), g->edx, 0, 2, t5, 1u);
    t8 = g->edx;
    g->edx = t8;
    t9 = cow_thiscall(g, COW_IMG(0x1013bf40u), t6, 0);
    t10 = g->edx;
    g->edx = t10;
    t11 = cow_stdcall(g, COW_IMG(0x101425a0u), 0);
    t12 = g->edx;
    g->edx = t12;
    t13 = cow_thiscall(g, COW_IMG(0x10143cb0u), self, 1, 0u);
    t14 = g->ecx;
    t15 = g->edx;
    g->edx = t15;
    cow_thiscall(g, COW_IMG(0x10037bf0u), t14, 0);
    t16 = g->edx;
    d17 = cow_take_float(g);
    t18 = rd32(rd32(COW_IMG(0x1057827cu)) + 8u);
    g->eax = rd32(COW_IMG(0x1057827cu));
    t19 = rd32(COW_IMG(0x1057827cu));
    t20 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t16, 2, t18, 0u);
    t21 = g->edx;
    g->edx = t21;
    fpush(g, d17);
    return t20;
L_10143d81: ;
    g->eax = eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t22 = cow_stdcall(g, COW_IMG(0x10141b80u), 0);
    t23 = g->ecx;
    t24 = g->edx;
    if ((uint8_t)t22 == 0u)
    {
        eax = t22;
        ecx = t23;
        edx = t24;
        goto L_10143e3d;
    }
    eax = t22;
    t25 = (eax & 0xffff0000u) | rd16(rd32(self + 8u) + 0x4cu);
    t26 = rd32(self + 8u);
    wr16(COW_IMG(0x1037148cu), (uint16_t)t25);
    g->eax = t25;
    g->esp = sp0 - 8u;
    t27 = cow_fastcall(g, COW_IMG(0x10143930u), self, t26, 1, t25);
    t28 = g->edx;
    wr16(COW_IMG(0x1037148cu), (uint8_t)t27);
    if (rd16(COW_IMG(0x105782acu)) == 0u)
    {
        eax = (t27 & 0xffff0000u) | (uint8_t)t27;
        goto L_10143df3;
    }
    eax = (t27 & 0xffff0000u) | (uint8_t)t27;
    edx = t28;
    t29 = (uint16_t)rd32(COW_IMG(0x105782acu));
    g->eax = eax;
    g->ecx = t29;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t30 = cow_cdecl(g, COW_IMG(0x10141cc0u), 2, eax, t29);
    t31 = g->ecx;
    t32 = g->edx;
    if ((uint8_t)t30 != 0u)
    {
        eax = t30;
        edx = t32;
    }
    else
    {
        eax = t30;
        ecx = t31;
        edx = t32;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t33 = cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
        t34 = g->edx;
        eax = t33;
        edx = t34;
    }
    wr16(COW_IMG(0x105782acu), 0u);
    wr16(COW_IMG(0x105782aeu), 0u);
    wr16(COW_IMG(0x1037148cu), 0xffffu);
    g->edx = edx;
    return eax;
L_10143df3: ;
    g->ebx = 0u;
    g->esi = self;
    g->eax = eax;
    g->ecx = self;
    g->edx = (uint32_t)(int16_t)eax;
    g->esp = sp0 - 8u;
    t35 = cow_stdcall(g, COW_IMG(0x10143bf0u), 1, (uint32_t)(int16_t)eax);
    t36 = g->ecx;
    t37 = g->edx;
    if ((uint8_t)t35 == 0u)
    {
        eax = t35;
        ecx = t36;
        edx = t37;
        goto L_10143e56;
    }
    eax = t35;
    ecx = t36;
    edx = t37;
    t38 = (eax & 0xffffff00u) | rd8(COW_IMG(0x1037148cu));
    g->eax = t38;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t39 = cow_cdecl(g, COW_IMG(0x10141c20u), 1, t38);
    t40 = g->ecx;
    t41 = g->edx;
    t42 = (uint16_t)t39 + 0x7400u;
    g->eax = t42;
    g->ecx = t40;
    g->edx = t41;
    g->esp = sp0 - 0xcu;
    t43 = cow_cdecl(g, COW_IMG(0x10141ed0u), 1, t42);
    t44 = g->ecx;
    t45 = g->edx;
    wr16(COW_IMG(0x105782aeu), (uint16_t)t43);
    if ((uint16_t)t43 != 0xffu)
    {
        eax = t43;
        ecx = t44;
        edx = t45;
    }
    else
    {
        eax = t43;
        ecx = t44;
        edx = t45;
        wr16(COW_IMG(0x105782aeu), 0u);
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t46 = cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
    t47 = g->edx;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edx = t47;
    return t46;
L_10143e3d: ;
    wr16(COW_IMG(0x1037148cu), 0xffffu);
    wr16(COW_IMG(0x105782acu), 0u);
    wr16(COW_IMG(0x105782aeu), 0u);
L_10143e56: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t48 = cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    t49 = g->edx;
    eax = t48;
    edx = t49;
L_10143e5b: ;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10143cd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10143cd0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
