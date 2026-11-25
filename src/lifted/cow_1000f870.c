/* f_0x1000f870 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1000f870(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_228;
    uint32_t loc_22c;
    uint32_t loc_230;
    uint32_t loc_234;
    uint32_t loc_240;
    uint32_t loc_244;
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
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 588u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1000f88cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_234 = rd32(sp0 - 0x234u); loc_230 = rd32(sp0 - 0x230u); loc_22c = rd32(sp0 - 0x22cu); loc_228 = rd32(sp0 - 0x228u); goto E_1000f88c;
    case 0x1000f893u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_234 = rd32(sp0 - 0x234u); loc_230 = rd32(sp0 - 0x230u); loc_22c = rd32(sp0 - 0x22cu); loc_228 = rd32(sp0 - 0x228u); goto E_1000f893;
    case 0x1000f895u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1000f895;
    case 0x1000f89du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_234 = rd32(sp0 - 0x234u); loc_230 = rd32(sp0 - 0x230u); loc_22c = rd32(sp0 - 0x22cu); loc_228 = rd32(sp0 - 0x228u); goto E_1000f89d;
    case 0x1000f8a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1000f8a2;
    case 0x1000f8acu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1000f8ac;
    case 0x1000f8bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1000f8bc;
    case 0x1000f8bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1000f8bf;
    case 0x1000f8d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1000f8d2;
    case 0x1000f8eau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1000f8ea;
    case 0x1000f8eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1000f8ee;
    case 0x1000f8f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1000f8f6;
    case 0x1000f8fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1000f8fc;
    case 0x1000f8feu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1000f8fe;
    case 0x1000f903u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1000f903;
    case 0x1000f937u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_244 = rd32(sp0 - 0x244u); loc_240 = rd32(sp0 - 0x240u); goto E_1000f937;
    case 0x1000f93au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1000f93a;
    case 0x1000f93cu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_244 = rd32(sp0 - 0x244u); loc_240 = rd32(sp0 - 0x240u); goto E_1000f93c;
    case 0x1000f93fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1000f93f;
    case 0x1000f949u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1000f949;
    case 0x1000f953u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1000f953;
    case 0x1000f95bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1000f95b;
    case 0x1000f961u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1000f961;
    case 0x1000f963u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1000f963;
    case 0x1000f96cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1000f96c;
    case 0x1000f971u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1000f971;
    case 0x1000f974u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1000f974;
    case 0x1000f97eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1000f97e;
    case 0x1000f986u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_234 = rd32(sp0 - 0x234u); loc_230 = rd32(sp0 - 0x230u); loc_22c = rd32(sp0 - 0x22cu); loc_228 = rd32(sp0 - 0x228u); goto E_1000f986;
    case 0x1000f9acu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1000f9ac;
    case 0x1000f9b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1000f9b2;
    case 0x1000f9bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1000f9bf;
    case 0x1000f9dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1000f9df;
    case 0x1000f9fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1000f9fb;
    case 0x1000f9fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1000f9fd;
    case 0x1000fa05u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1000fa05;
    case 0x1000fa0bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1000fa0b;
    case 0x1000fa16u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1000fa16;
    case 0x1000fa23u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1000fa23;
    case 0x1000fa2bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1000fa2b;
    case 0x1000fa31u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1000fa31;
    default: break;
    }
#endif

    COW_AT(1000f870)
    wr32(sp0 - 0x228u, in_ebx);
    wr32(sp0 - 0x22cu, in_ebp);
    wr32(sp0 - 0x230u, in_esi);
    wr32(sp0 - 0x234u, in_edi);
    t1 = rd32(rd32(COW_IMG(0x10456700u)));
    if (t1 == 0u)
    {
        ecx = self;
        loc_228 = in_ebx;
        loc_22c = in_ebp;
        loc_230 = in_esi;
        loc_234 = in_edi;
        goto L_1000f986;
    }
    ecx = self;
    edx = in_edx;
    ebp = rd32(COW_IMG(0x10456700u));
    esi = 0u;
    loc_228 = in_ebx;
    loc_22c = in_ebp;
    loc_230 = in_esi;
    loc_234 = in_edi;
L_1000f88c: ;
    COW_AT(1000f88c)
    if (rd32(ebp + 0x18u) == 0u)
    {
        eax = rd32(ebp + 0x18u);
        goto L_1000f89d;
    }
    eax = rd32(ebp + 0x18u);
    COW_AT(1000f893)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x234u;
    t2 = cow_thiscall(g, eax, ecx, 0);
    t3 = g->ecx;
    t4 = g->edx;
    eax = t2;
    ecx = t3;
    edx = t4;
    COW_AT(1000f895)
    if (eax != 0u) goto L_1000f963;
    loc_228 = rd32(sp0 - 0x228u);
    loc_22c = rd32(sp0 - 0x22cu);
    loc_230 = rd32(sp0 - 0x230u);
    loc_234 = rd32(sp0 - 0x234u);
L_1000f89d: ;
    COW_AT(1000f89d)
    wr32(sp0 - 0x238u, 1u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x234u;
    t5 = cow_thiscall(g, rd32(ebp + 4u), ecx, 1, 1u);
    t6 = g->ecx;
    t7 = g->edx;
    eax = t5;
    ecx = t6;
    edx = t7;
    COW_AT(1000f8a2)
    if ((int32_t)eax < 0)
    {
        esi = eax;
        goto L_1000fa16;
    }
    esi = eax;
    COW_AT(1000f8ac)
    t8 = rd32(COW_IMG(0x104566f0u));
    if (t8 != 0x84u) goto L_1000f963;
    COW_AT(1000f8bc)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x234u;
    t9 = cow_thiscall(g, rd32(ebp + 0x1cu), ecx, 0);
    t10 = g->ecx;
    t11 = g->edx;
    eax = t9;
    ecx = t10;
    edx = t11;
    COW_AT(1000f8bf)
    wr32(sp0 - 0x224u, 0u);
    if (eax == 0u)
    {
        esi = 0u;
        goto L_1000f963;
    }
    ebx = rd32(ebp);
    edi = eax;
    COW_AT(1000f8d2)
    wr32(sp0 - 0x238u, sp0 - 0x224u);
    wr32(sp0 - 0x23cu, COW_IMG(0x1034a148u));
    wr32(sp0 - 0x240u, 1u);
    wr32(sp0 - 0x244u, 0u);
    wr32(sp0 - 0x248u, COW_IMG(0x1034a138u));
    g->eax = sp0 - 0x224u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x234u;
    t12 = cow_stdcall(g, rd32(COW_IMG(0x103294a4u)), 5, COW_IMG(0x1034a138u), 0u, 1u, COW_IMG(0x1034a148u), sp0 - 0x224u);   /* ole32.dll!CoCreateInstance */
    t13 = g->ecx;
    t14 = g->edx;
    eax = t12;
    ecx = t13;
    edx = t14;
    COW_AT(1000f8ea)
    if ((int32_t)eax >= 0) goto L_1000f8fe;
    COW_AT(1000f8ee)
    if (rd32(sp0 - 0x224u) != 0u)
    {
        eax = rd32(sp0 - 0x224u);
    COW_AT(1000f8f6)
        wr32(sp0 - 0x238u, eax);
        g->edx = edx;
        t15 = rd32(eax);
        g->esp = sp0 - 0x234u;
        cow_thiscall(g, rd32(t15 + 8u), t15, 1, eax);
        t16 = g->ecx;
        t17 = g->edx;
        ecx = t16;
        edx = t17;
    COW_AT(1000f8fc)
    }
L_1000f961: ;
    COW_AT(1000f961)
    esi = 0u;
L_1000f963: ;
    COW_AT(1000f963)
    t34 = rd32(COW_IMG(0x104566f0u));
    if (t34 != 0x64u)
    {
    COW_AT(1000f971)
        ebp = ebp + 0x24u;
    }
    else
    {
    COW_AT(1000f96c)
        ebp = ebp + 0x1cu;
    }
    COW_AT(1000f974)
    t35 = rd32(ebp);
    if (t35 != 0u)
    {
        loc_228 = rd32(sp0 - 0x228u);
        loc_22c = rd32(sp0 - 0x22cu);
        loc_230 = rd32(sp0 - 0x230u);
        loc_234 = rd32(sp0 - 0x234u);
        goto L_1000f88c;
    }
    COW_AT(1000f97e)
    if ((int32_t)esi < 0) goto L_1000fa16;
    loc_228 = rd32(sp0 - 0x228u);
    loc_22c = rd32(sp0 - 0x22cu);
    loc_230 = rd32(sp0 - 0x230u);
    loc_234 = rd32(sp0 - 0x234u);
L_1000f986: ;
    COW_AT(1000f986)
    wr32(sp0 - 0x238u, sp0 - 0x21cu);
    wr32(sp0 - 0x23cu, sp0 - 0x220u);
    wr32(sp0 - 0x240u, 0u);
    wr32(sp0 - 0x244u, COW_IMG(0x104566f0u));
    wr32(sp0 - 0x220u, 0u);
    wr32(sp0 - 0x21cu, 0u);
    g->eax = sp0 - 0x220u;
    g->ecx = ecx;
    g->edx = sp0 - 0x21cu;
    g->esp = sp0 - 0x234u;
    t36 = cow_stdcall(g, COW_IMG(0x1000fa80u), 4, COW_IMG(0x104566f0u), 0u, sp0 - 0x220u, sp0 - 0x21cu);
    t37 = g->ecx;
    t38 = g->edx;
    eax = t36;
    ecx = t37;
    edx = t38;
    COW_AT(1000f9ac)
    if ((int32_t)eax < 0)
    {
        esi = eax;
    }
    else
    {
    COW_AT(1000f9b2)
        t39 = rd32(sp0 - 0x220u);
        wr32(sp0 - 0x238u, t39);
        g->eax = t39;
        g->esp = sp0 - 0x234u;
        t40 = cow_stdcall(g, rd32(COW_IMG(0x1032913cu)), 1, t39);   /* kernel32.dll!lstrlenW */
        eax = t40;
        esi = t39;
    COW_AT(1000f9bf)
        t41 = eax * 2u + 2u;
        edi = sp0 - 0x208u;
        ecx = t41 >> 2u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        wr32(sp0 - 0x238u, sp0 - 0x208u);
        ecx = t41 & 3u;
        while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
        g->eax = sp0 - 0x208u;
        g->esp = sp0 - 0x234u;
        t42 = cow_call_regs(g, COW_IMG(0x1000fa40u), g->eax, g->ecx, t41, 0, 1, rd32(sp0 - 0x238u));
        eax = t42;
    COW_AT(1000f9df)
        wr16(eax * 2u + sp0 - 0x208u, 0u);
        wr32(sp0 - 0x238u, sp0 - 0x208u);
        t43 = rd32(sp0 - 0x220u);
        wr32(sp0 - 0x23cu, t43);
        t44 = rd32(sp0 - 0x21cu);
        wr32(sp0 - 0x240u, t44);
        g->eax = t44;
        g->ecx = sp0 - 0x208u;
        g->edx = t43;
        g->esp = sp0 - 0x234u;
        t45 = cow_stdcall(g, rd32(COW_IMG(0x10329304u)), 3, t44, t43, sp0 - 0x208u);   /* oleaut32.dll!RegisterTypeLib */
        t46 = g->ecx;
        t47 = g->edx;
        eax = t45;
        ecx = t46;
        edx = t47;
    COW_AT(1000f9fb)
        esi = eax;
    }
    COW_AT(1000f9fd)
    if (rd32(sp0 - 0x21cu) == 0u)
    {
        eax = rd32(sp0 - 0x21cu);
    }
    else
    {
        eax = rd32(sp0 - 0x21cu);
    COW_AT(1000fa05)
        wr32(sp0 - 0x238u, eax);
        g->eax = eax;
        t48 = rd32(eax);
        g->esp = sp0 - 0x234u;
        t49 = cow_thiscall(g, rd32(t48 + 8u), t48, 1, eax);
        t50 = g->ecx;
        eax = t49;
        ecx = t50;
    }
    COW_AT(1000fa0b)
    t51 = rd32(sp0 - 0x220u);
    wr32(sp0 - 0x238u, t51);
    g->edx = t51;
    g->esp = sp0 - 0x234u;
    cow_stdcall(g, rd32(COW_IMG(0x10329310u)), 1, t51);   /* oleaut32.dll!SysFreeString */
    t52 = g->edx;
    edx = t52;
L_1000fa16: ;
    COW_AT(1000fa16)
    g->ebx = rd32(sp0 - 0x228u);
    g->esi = rd32(sp0 - 0x230u);
    g->edi = rd32(sp0 - 0x234u);
    g->ebp = rd32(sp0 - 0x22cu);
    g->edx = edx;
    return esi;
L_1000f8fe: ;
    COW_AT(1000f8fe)
    t18 = rd32(edi);
    if (t18 == 0u) goto L_1000f953;
L_1000f903: ;
    COW_AT(1000f903)
    t19 = rd32(rd32(edi + 4u));
    wr32(sp0 - 0x218u, t19);
    t20 = rd32(rd32(edi + 4u) + 4u);
    wr32(sp0 - 0x214u, t20);
    t21 = rd32(rd32(edi + 4u) + 8u);
    wr32(sp0 - 0x210u, t21);
    t22 = rd32(rd32(edi + 4u) + 0xcu);
    wr32(sp0 - 0x20cu, t22);
    wr32(sp0 - 0x238u, sp0 - 0x218u);
    wr32(sp0 - 0x23cu, 1u);
    wr32(sp0 - 0x240u, ebx);
    t23 = rd32(sp0 - 0x224u);
    wr32(sp0 - 0x244u, t23);
    if (rd32(edi) != 1u)
    {
        eax = t23;
        edx = rd32(rd32(sp0 - 0x224u));
        loc_240 = ebx;
        loc_244 = t23;
    COW_AT(1000f93c)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x234u;
        t27 = cow_thiscall(g, rd32(edx + 0x1cu), sp0 - 0x218u, 4, loc_244, loc_240, 1u, sp0 - 0x218u);
        t28 = g->ecx;
        t29 = g->edx;
        eax = t27;
        ecx = t28;
        edx = t29;
    }
    else
    {
        eax = t23;
        edx = rd32(rd32(sp0 - 0x224u));
        loc_240 = ebx;
        loc_244 = t23;
    COW_AT(1000f937)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x234u;
        t24 = cow_thiscall(g, rd32(edx + 0x14u), sp0 - 0x218u, 4, loc_244, loc_240, 1u, sp0 - 0x218u);
        t25 = g->ecx;
        t26 = g->edx;
        eax = t24;
        ecx = t25;
        edx = t26;
    COW_AT(1000f93a)
    }
    COW_AT(1000f93f)
    if ((int32_t)eax < 0)
    {
        esi = eax;
        goto L_1000fa23;
    }
    COW_AT(1000f949)
    if (rd32(edi + 8u) != 0u)
    {
        edi = edi + 8u;
        goto L_1000f903;
    }
L_1000f953: ;
    COW_AT(1000f953)
    if (rd32(sp0 - 0x224u) != 0u)
    {
        eax = rd32(sp0 - 0x224u);
    COW_AT(1000f95b)
        wr32(sp0 - 0x238u, eax);
        g->edx = rd32(eax);
        t31 = rd32(eax);
        g->esp = sp0 - 0x234u;
        cow_thiscall(g, rd32(t31 + 8u), ecx, 1, eax);
        t32 = g->ecx;
        t33 = g->edx;
        ecx = t32;
        edx = t33;
    }
    goto L_1000f961;
L_1000fa23: ;
    COW_AT(1000fa23)
    if (rd32(sp0 - 0x224u) == 0u) goto L_1000fa16;
    eax = rd32(sp0 - 0x224u);
    COW_AT(1000fa2b)
    wr32(sp0 - 0x238u, eax);
    g->edx = edx;
    g->esp = sp0 - 0x234u;
    cow_thiscall(g, rd32(rd32(eax) + 8u), rd32(eax), 1, eax);
    t30 = g->edx;
    edx = t30;
    COW_AT(1000fa31)
    g->ebx = rd32(sp0 - 0x228u);
    g->esi = rd32(sp0 - 0x230u);
    g->edi = rd32(sp0 - 0x234u);
    g->ebp = rd32(sp0 - 0x22cu);
    g->edx = edx;
    return esi;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1000f870(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1000f88cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_228;
        uint32_t loc_22c;
        uint32_t loc_230;
        uint32_t loc_234;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_234 = rd32(sp0 - 0x234u);
        loc_230 = rd32(sp0 - 0x230u);
        loc_22c = rd32(sp0 - 0x22cu);
        loc_228 = rd32(sp0 - 0x228u);
        g->esp = sp0 - 0x234u;
        (void)sp0;
        return 1;
    }
    case 0x1000f893u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_228;
        uint32_t loc_22c;
        uint32_t loc_230;
        uint32_t loc_234;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_234 = rd32(sp0 - 0x234u);
        loc_230 = rd32(sp0 - 0x230u);
        loc_22c = rd32(sp0 - 0x22cu);
        loc_228 = rd32(sp0 - 0x228u);
        g->esp = sp0 - 0x234u;
        (void)sp0;
        return 1;
    }
    case 0x1000f895u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x234u;
        (void)sp0;
        return 1;
    }
    case 0x1000f89du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_228;
        uint32_t loc_22c;
        uint32_t loc_230;
        uint32_t loc_234;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_234 = rd32(sp0 - 0x234u);
        loc_230 = rd32(sp0 - 0x230u);
        loc_22c = rd32(sp0 - 0x22cu);
        loc_228 = rd32(sp0 - 0x228u);
        g->esp = sp0 - 0x234u;
        (void)sp0;
        return 1;
    }
    case 0x1000f8a2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x234u;
        (void)sp0;
        return 1;
    }
    case 0x1000f8acu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x234u;
        (void)sp0;
        return 1;
    }
    case 0x1000f8bcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x234u;
        (void)sp0;
        return 1;
    }
    case 0x1000f8bfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x234u;
        (void)sp0;
        return 1;
    }
    case 0x1000f8d2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x234u;
        g->esi = 0u;
        wr32(sp0 - 0x224u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1000f8eau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x234u;
        (void)sp0;
        return 1;
    }
    case 0x1000f8eeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x234u;
        (void)sp0;
        return 1;
    }
    case 0x1000f8f6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x234u;
        (void)sp0;
        return 1;
    }
    case 0x1000f8fcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x234u;
        (void)sp0;
        return 1;
    }
    case 0x1000f8feu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x234u;
        (void)sp0;
        return 1;
    }
    case 0x1000f903u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x234u;
        (void)sp0;
        return 1;
    }
    case 0x1000f937u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_240;
        uint32_t loc_244;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_244 = rd32(sp0 - 0x244u);
        loc_240 = rd32(sp0 - 0x240u);
        g->esp = sp0 - 0x244u;
        g->ecx = sp0 - 0x218u;
        wr32(sp0 - 0x23cu, 1u);
        wr32(sp0 - 0x238u, sp0 - 0x218u);
        (void)sp0;
        return 1;
    }
    case 0x1000f93au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x234u;
        (void)sp0;
        return 1;
    }
    case 0x1000f93cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_240;
        uint32_t loc_244;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_244 = rd32(sp0 - 0x244u);
        loc_240 = rd32(sp0 - 0x240u);
        g->esp = sp0 - 0x244u;
        g->ecx = sp0 - 0x218u;
        wr32(sp0 - 0x23cu, 1u);
        wr32(sp0 - 0x238u, sp0 - 0x218u);
        (void)sp0;
        return 1;
    }
    case 0x1000f93fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x234u;
        (void)sp0;
        return 1;
    }
    case 0x1000f949u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x234u;
        (void)sp0;
        return 1;
    }
    case 0x1000f953u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x234u;
        (void)sp0;
        return 1;
    }
    case 0x1000f95bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x234u;
        (void)sp0;
        return 1;
    }
    case 0x1000f961u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x234u;
        (void)sp0;
        return 1;
    }
    case 0x1000f963u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x234u;
        (void)sp0;
        return 1;
    }
    case 0x1000f96cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x234u;
        (void)sp0;
        return 1;
    }
    case 0x1000f971u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x234u;
        (void)sp0;
        return 1;
    }
    case 0x1000f974u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x234u;
        (void)sp0;
        return 1;
    }
    case 0x1000f97eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x234u;
        (void)sp0;
        return 1;
    }
    case 0x1000f986u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_228;
        uint32_t loc_22c;
        uint32_t loc_230;
        uint32_t loc_234;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_234 = rd32(sp0 - 0x234u);
        loc_230 = rd32(sp0 - 0x230u);
        loc_22c = rd32(sp0 - 0x22cu);
        loc_228 = rd32(sp0 - 0x228u);
        g->esp = sp0 - 0x234u;
        (void)sp0;
        return 1;
    }
    case 0x1000f9acu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x234u;
        (void)sp0;
        return 1;
    }
    case 0x1000f9b2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x234u;
        (void)sp0;
        return 1;
    }
    case 0x1000f9bfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x234u;
        (void)sp0;
        return 1;
    }
    case 0x1000f9dfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x234u;
        (void)sp0;
        return 1;
    }
    case 0x1000f9fbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x234u;
        (void)sp0;
        return 1;
    }
    case 0x1000f9fdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x234u;
        (void)sp0;
        return 1;
    }
    case 0x1000fa05u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x234u;
        (void)sp0;
        return 1;
    }
    case 0x1000fa0bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x234u;
        (void)sp0;
        return 1;
    }
    case 0x1000fa16u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x234u;
        (void)sp0;
        return 1;
    }
    case 0x1000fa23u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x234u;
        (void)sp0;
        return 1;
    }
    case 0x1000fa2bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x234u;
        (void)sp0;
        return 1;
    }
    case 0x1000fa31u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x234u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1000f870(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1000f870(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
