/* f_0x1000f420 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1000f420(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_1004;
    uint32_t loc_1008;
    uint32_t loc_100c;
    uint32_t loc_1010;
    uint32_t loc_1014;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
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
    uint32_t t4;
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
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 4120u);

    wr32(sp0 - 0x1004u, in_ebx);
    wr32(sp0 - 0x1008u, in_ebp);
    wr32(sp0 - 0x100cu, in_esi);
    wr32(sp0 - 0x1010u, in_edi);
    if (rd8(arg1) != 0x3du)
    {
        loc_1004 = in_ebx;
        loc_1008 = in_ebp;
        loc_100c = in_esi;
        loc_1010 = in_edi;
        goto L_1000f56d;
    }
    t1 = (self & 0xffffff00u) | rd8(rd32(self));
    wr32(sp0 - 0x1014u, t1);
    g->eax = rd32(self);
    g->ecx = self;
    g->edx = in_edx;
    t2 = rd32(self);
    g->esp = sp0 - 0x1010u;
    t3 = cow_stdcall(g, COW_IMG(0x1000eee0u), 1, t1);
    t4 = g->ecx;
    t5 = g->edx;
    if (t3 == 0u)
    {
        eax = t3;
        ecx = t4;
        edx = t5;
        ebp = rd32(COW_IMG(0x10329370u));
        goto L_1000f46c;
    }
    eax = t3;
    ecx = t4;
    ebp = rd32(COW_IMG(0x10329370u));
L_1000f457: ;
    wr32(sp0 - 0x1014u, rd32(self));
    g->eax = eax;
    g->edx = rd32(self);
    t6 = rd32(self);
    g->esp = sp0 - 0x1010u;
    t7 = cow_thiscall(g, ebp, ecx, 1, t6);
    t8 = g->edx;
    wr32(self, t7);
    t9 = (t7 & 0xffffff00u) | rd8(t7);
    wr32(sp0 - 0x1014u, t9);
    g->eax = t9;
    g->ecx = self;
    g->edx = t8;
    t10 = cow_stdcall(g, COW_IMG(0x1000eee0u), 1, t9);
    t11 = g->ecx;
    t12 = g->edx;
    if (t10 != 0u)
    {
        eax = t10;
        ecx = t11;
        goto L_1000f457;
    }
    eax = t10;
    ecx = t11;
    edx = t12;
L_1000f46c: ;
    if (rd8(rd32(self)) == 0u) goto L_1000f535;
    eax = (eax & 0xffffff00u) | rd8(rd32(self));
    edi = rd32(self);
    if ((uint8_t)eax != 0x27u)
    {
        ebx = arg1;
        goto L_1000f507;
    }
    wr32(sp0 - 0x1014u, edi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1010u;
    t13 = cow_thiscall(g, ebp, ecx, 1, edi);
    t14 = g->ecx;
    t15 = g->edx;
    wr32(self, t13);
    if (rd8(t13) == 0u)
    {
        edx = t15;
        ebx = arg1;
        goto L_1000f4da;
    }
    ecx = (t14 & 0xffffff00u) | rd8(t13);
    edx = t15;
    ebx = arg1;
L_1000f48b: ;
    if (rd8(rd32(self)) != 0x27u) goto L_1000f49a;
    eax = rd32(self);
    wr32(sp0 - 0x1014u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1010u;
    t16 = cow_thiscall(g, ebp, ecx, 1, eax);
    t17 = g->ecx;
    t18 = g->edx;
    if (rd8(t16) != 0x27u)
    {
        edx = t18;
        goto L_1000f4da;
    }
    ecx = t17;
    edx = t18;
L_1000f49a: ;
    if (rd8(rd32(self)) != 0x27u)
    {
        eax = rd32(self);
    }
    else
    {
        eax = rd32(self);
        wr32(sp0 - 0x1014u, eax);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x1010u;
        t19 = cow_thiscall(g, ebp, ecx, 1, eax);
        t20 = g->ecx;
        t21 = g->edx;
        wr32(self, t19);
        eax = t19;
        ecx = t20;
        edx = t21;
    }
    wr32(sp0 - 0x1014u, rd32(self));
    g->eax = eax;
    t22 = rd32(self);
    g->esp = sp0 - 0x1010u;
    t23 = cow_thiscall(g, ebp, ecx, 1, t22);
    wr32(self, t23);
    if (ebx + 2u >= arg1 + 0x1000u) goto L_1000f535;
    eax = t23;
    edi = t22;
    if (edi >= eax)
    {
        ecx = arg1 + 0x1000u;
    }
    else
    {
        eax = edi;
        ecx = arg1 + 0x1000u;
L_1000f4c7: ;
        wr8(ebx, rd8(eax));
        if (eax + 1u < rd32(self))
        {
            eax = eax + 1u;
            ecx = rd32(self);
            ebx = ebx + 1u;
            goto L_1000f4c7;
        }
        ecx = rd32(self);
        ebx = ebx + 1u;
    }
    if (rd8(rd32(self)) != 0u)
    {
        edx = rd32(self);
        goto L_1000f48b;
    }
    edx = rd32(self);
L_1000f4da: ;
    if (rd8(rd32(self)) == 0u) goto L_1000f535;
    eax = rd32(self);
    wr8(ebx, 0u);
    wr32(sp0 - 0x1014u, rd32(self));
    ecx = rd32(self);
    loc_1014 = rd32(self);
L_1000f4e7: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1010u;
    t31 = cow_thiscall(g, ebp, ecx, 1, loc_1014);
    t32 = g->edx;
    wr32(self, t31);
    edx = t32;
L_1000f4eb: ;
    if ((uint32_t)(int8_t)rd8(rd32(self)) - 9u > 0x17u) goto L_1000f54a;
    eax = rd32(self);
    ecx = (uint32_t)(int8_t)rd8(rd32(self)) - 9u;
    t30 = rd32(COW_IMG(0x1000f57cu) + rd8(COW_IMG(0x1000f584u) + ecx) * 4u);
    edx = rd8(COW_IMG(0x1000f584u) + ecx);
    switch (t30 - RD)
    {
    case 0x1000f547u: goto L_1000f547;
    case 0x1000f54au: goto L_1000f54a;
    default: rt_fatal(g, COW_IMG(0x1000f500u), "switch");
    }
    return 0;
L_1000f507: ;
    wr32(sp0 - 0x1014u, eax);
    g->eax = eax;
    g->ecx = self;
    g->edx = edx;
    g->esp = sp0 - 0x1010u;
    t24 = cow_stdcall(g, COW_IMG(0x1000eee0u), 1, eax);
    t25 = g->ecx;
    t26 = g->edx;
    if (t24 != 0u)
    {
        edx = t26;
        goto L_1000f530;
    }
    eax = t24;
    ecx = t25;
    edx = t26;
    wr32(sp0 - 0x1014u, edi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1010u;
    t27 = cow_thiscall(g, ebp, ecx, 1, edi);
    t28 = g->edx;
    wr32(self, t27);
    if (edi >= t27)
    {
        eax = t27;
        edx = t28;
        goto L_1000f528;
    }
    edx = t28;
L_1000f51c: ;
    t29 = rd8(edi);
    wr8(ebx, (uint8_t)t29);
    if (edi + 1u < rd32(self))
    {
        edx = (edx & 0xffffff00u) | t29;
        ebx = ebx + 1u;
        edi = edi + 1u;
        goto L_1000f51c;
    }
    eax = rd32(self);
    edx = (edx & 0xffffff00u) | t29;
    ebx = ebx + 1u;
L_1000f528: ;
    if (rd8(rd32(self)) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(rd32(self));
        edi = rd32(self);
        goto L_1000f507;
    }
L_1000f530: ;
    wr8(ebx, 0u);
    goto L_1000f4eb;
L_1000f535: ;
    g->ebx = rd32(sp0 - 0x1004u);
    g->esi = rd32(sp0 - 0x100cu);
    g->edi = rd32(sp0 - 0x1010u);
    g->ebp = rd32(sp0 - 0x1008u);
    return 0x80020009u;
L_1000f547: ;
    wr32(sp0 - 0x1014u, eax);
    loc_1014 = eax;
    goto L_1000f4e7;
L_1000f54a: ;
    wr32(sp0 - 0x1014u, sp0 - 0x1000u);
    g->eax = sp0 - 0x1000u;
    g->esp = sp0 - 0x1010u;
    t33 = cow_fastcall(g, COW_IMG(0x1000e0f0u), self, edx, 1, sp0 - 0x1000u);
    t34 = g->edx;
    if ((int32_t)t33 < 0)
    {
        eax = t33;
        loc_1004 = rd32(sp0 - 0x1004u);
        loc_1008 = rd32(sp0 - 0x1008u);
        loc_100c = rd32(sp0 - 0x100cu);
        loc_1010 = rd32(sp0 - 0x1010u);
        goto L_1000f56f;
    }
    eax = t33;
    edx = t34;
    wr32(sp0 - 0x1014u, arg1);
    g->eax = eax;
    g->esp = sp0 - 0x1010u;
    t35 = cow_fastcall(g, COW_IMG(0x1000e0f0u), self, edx, 1, arg1);
    if ((int32_t)t35 < 0)
    {
        eax = t35;
        loc_1004 = rd32(sp0 - 0x1004u);
        loc_1008 = rd32(sp0 - 0x1008u);
        loc_100c = rd32(sp0 - 0x100cu);
        loc_1010 = rd32(sp0 - 0x1010u);
        goto L_1000f56f;
    }
    loc_1004 = rd32(sp0 - 0x1004u);
    loc_1008 = rd32(sp0 - 0x1008u);
    loc_100c = rd32(sp0 - 0x100cu);
    loc_1010 = rd32(sp0 - 0x1010u);
L_1000f56d: ;
    eax = 0u;
L_1000f56f: ;
    g->ebx = loc_1004;
    g->esi = loc_100c;
    g->edi = loc_1010;
    g->ebp = loc_1008;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1000f420(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1000f420(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
