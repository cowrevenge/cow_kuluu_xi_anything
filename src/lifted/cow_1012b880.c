/* f_0x1012b880 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1012b880(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_44;
    uint32_t loc_48;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 96u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1012b88du: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1012b88d;
    case 0x1012b891u: in_eax = g->eax; ecx = g->ecx; in_edx = g->edx; goto E_1012b891;
    case 0x1012b89cu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1012b89c;
    case 0x1012b8aau: eax = g->eax; ecx = g->ecx; goto E_1012b8aa;
    case 0x1012b8b1u: eax = g->eax; ecx = g->ecx; goto E_1012b8b1;
    case 0x1012b8b9u: eax = g->eax; ecx = g->ecx; goto E_1012b8b9;
    case 0x1012b8c7u: eax = g->eax; ecx = g->ecx; goto E_1012b8c7;
    case 0x1012b8dcu: eax = g->eax; ecx = g->ecx; goto E_1012b8dc;
    case 0x1012b8f1u: eax = g->eax; ecx = g->ecx; goto E_1012b8f1;
    case 0x1012b8fau: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1012b8fa;
    case 0x1012b90fu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1012b90f;
    case 0x1012b916u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1012b916;
    case 0x1012b919u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1012b919;
    case 0x1012b933u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1012b933;
    case 0x1012b938u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); goto E_1012b938;
    case 0x1012b958u: eax = g->eax; ecx = g->ecx; goto E_1012b958;
    case 0x1012b95cu: eax = g->eax; ecx = g->ecx; goto E_1012b95c;
    case 0x1012b965u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1012b965;
    case 0x1012b96fu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1012b96f;
    case 0x1012b973u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1012b973;
    case 0x1012b978u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1012b978;
    case 0x1012b989u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); goto E_1012b989;
    case 0x1012b99eu: eax = g->eax; ecx = g->ecx; goto E_1012b99e;
    case 0x1012b9b7u: eax = g->eax; ecx = g->ecx; goto E_1012b9b7;
    case 0x1012b9ceu: eax = g->eax; ecx = g->ecx; goto E_1012b9ce;
    case 0x1012b9f4u: eax = g->eax; ecx = g->ecx; goto E_1012b9f4;
    case 0x1012ba06u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1012ba06;
    case 0x1012ba12u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1012ba12;
    case 0x1012ba26u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1012ba26;
    case 0x1012ba3eu: eax = g->eax; ecx = g->ecx; goto E_1012ba3e;
    case 0x1012ba4fu: eax = g->eax; ecx = g->ecx; goto E_1012ba4f;
    case 0x1012ba64u: eax = g->eax; ecx = g->ecx; goto E_1012ba64;
    case 0x1012ba77u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1012ba77;
    case 0x1012ba82u: eax = g->eax; ecx = g->ecx; goto E_1012ba82;
    case 0x1012ba9fu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1012ba9f;
    case 0x1012baa7u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1012baa7;
    case 0x1012bacfu: eax = g->eax; ecx = g->ecx; goto E_1012bacf;
    case 0x1012bae4u: eax = g->eax; ecx = g->ecx; goto E_1012bae4;
    case 0x1012bb11u: eax = g->eax; ecx = g->ecx; goto E_1012bb11;
    case 0x1012bb19u: eax = g->eax; ecx = g->ecx; goto E_1012bb19;
    case 0x1012bb31u: eax = g->eax; ecx = g->ecx; goto E_1012bb31;
    case 0x1012bb61u: eax = g->eax; ecx = g->ecx; goto E_1012bb61;
    case 0x1012bb76u: eax = g->eax; ecx = g->ecx; goto E_1012bb76;
    case 0x1012bb8bu: eax = g->eax; ecx = g->ecx; goto E_1012bb8b;
    case 0x1012bba0u: eax = g->eax; ecx = g->ecx; goto E_1012bba0;
    case 0x1012bbb4u: eax = g->eax; ecx = g->ecx; goto E_1012bbb4;
    case 0x1012bbb8u: eax = g->eax; ecx = g->ecx; goto E_1012bbb8;
    case 0x1012bbceu: eax = g->eax; ecx = g->ecx; goto E_1012bbce;
    case 0x1012bbeau: eax = g->eax; ecx = g->ecx; goto E_1012bbea;
    case 0x1012bbeeu: eax = g->eax; ecx = g->ecx; goto E_1012bbee;
    case 0x1012bbfdu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1012bbfd;
    case 0x1012bc04u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1012bc04;
    case 0x1012bc07u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1012bc07;
    case 0x1012bc0du: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); goto E_1012bc0d;
    case 0x1012bc26u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1012bc26;
    default: break;
    }
#endif

    COW_AT(1012b880)
    if (rd32(COW_IMG(0x1057876cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1057876cu));
    COW_AT(1012b891)
        g->esp = sp0 - 0x40u;
        t1 = cow_call_regs(g, COW_IMG(0x101597f0u), in_eax, ecx, in_edx, 1, 0);
        eax = t1;
        ecx = rd32(COW_IMG(0x1057876cu));
    }
    else
    {
        ecx = rd32(COW_IMG(0x1057876cu));
    COW_AT(1012b88d)
        eax = 0u;
    }
    COW_AT(1012b89c)
    if (arg1 - 1u > 0x1au) goto L_1012bc26;
    COW_AT(1012b8aa)
    t2 = rd32(COW_IMG(0x1012bc2cu) + arg1 * 4u - 4u);
    switch (t2 - RD)
    {
    case 0x1012b8b1u: goto L_1012b8b1;
    case 0x1012b8c7u: goto L_1012b8c7;
    case 0x1012b8dcu: goto L_1012b8dc;
    case 0x1012b8f1u: goto L_1012b8f1;
    case 0x1012b958u: goto L_1012b958;
    case 0x1012b99eu: goto L_1012b99e;
    case 0x1012b9b7u: goto L_1012b9b7;
    case 0x1012b9ceu: goto L_1012b9ce;
    case 0x1012b9f4u: goto L_1012b9f4;
    case 0x1012ba3eu: goto L_1012ba3e;
    case 0x1012ba4fu: goto L_1012ba4f;
    case 0x1012ba64u: goto L_1012ba64;
    case 0x1012ba82u: goto L_1012ba82;
    case 0x1012ba9fu: goto L_1012ba9f;
    case 0x1012bacfu: goto L_1012bacf;
    case 0x1012bae4u: goto L_1012bae4;
    case 0x1012bb11u: goto L_1012bb11;
    case 0x1012bb31u: goto L_1012bb31;
    case 0x1012bb61u: goto L_1012bb61;
    case 0x1012bb76u: goto L_1012bb76;
    case 0x1012bb8bu: goto L_1012bb8b;
    case 0x1012bba0u: goto L_1012bba0;
    case 0x1012bbb4u: goto L_1012bbb4;
    case 0x1012bbeau: goto L_1012bbea;
    default: rt_fatal(g, COW_IMG(0x1012b8aau), "switch");
    }
    return;
L_1012b8b1: ;
    COW_AT(1012b8b1)
    if (eax == 0u) goto L_1012bc26;
    COW_AT(1012b8b9)
    t42 = rd32(eax + 4u);
    wr32(sp0 - 0x44u, t42);
    wr32(sp0 - 0x48u, COW_IMG(0x1036f5e8u));
    eax = t42;
    edx = arg1 - 1u;
    loc_44 = t42;
    loc_48 = COW_IMG(0x1036f5e8u);
L_1012bc0d: ;
    COW_AT(1012bc0d)
    wr32(sp0 - 0x4cu, sp0 - 0x40u);
    g->eax = eax;
    g->ecx = sp0 - 0x40u;
    g->esp = sp0 - 0x38u;
    t43 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x40u, loc_48, loc_44, rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu));
    t44 = g->ecx;
    wr32(sp0 - 0x50u, 0u);
    wr32(sp0 - 0x54u, sp0 - 0x40u);
    g->esp = sp0 - 0x4cu;
    cow_cdecl(g, COW_IMG(0x10080dc0u), 2, sp0 - 0x40u, 0u);
L_1012bc26: ;
    COW_AT(1012bc26)
    return;
L_1012b8c7: ;
    COW_AT(1012b8c7)
    wr32(sp0 - 0x44u, 0u);
    wr32(sp0 - 0x48u, COW_IMG(0x1036f5e0u));
    g->esp = sp0 - 0x40u;
    cow_cdecl(g, COW_IMG(0x10080dc0u), 2, COW_IMG(0x1036f5e0u), 0u);
    return;
L_1012b8dc: ;
    COW_AT(1012b8dc)
    wr32(sp0 - 0x44u, 0u);
    wr32(sp0 - 0x48u, COW_IMG(0x1036f5d4u));
    g->esp = sp0 - 0x40u;
    cow_cdecl(g, COW_IMG(0x10080dc0u), 2, COW_IMG(0x1036f5d4u), 0u);
    return;
L_1012b8f1: ;
    COW_AT(1012b8f1)
    g->eax = eax;
    g->edx = arg1 - 1u;
    g->esp = sp0 - 0x40u;
    t33 = cow_thiscall(g, COW_IMG(0x101598b0u), ecx, 0);
    t34 = g->edx;
    if (t33 == 0u)
    {
        eax = t33;
    COW_AT(1012b933)
        wr32(sp0 - 0x44u, COW_IMG(0x103d3c84u));
        loc_44 = COW_IMG(0x103d3c84u);
    }
    else
    {
        eax = t33;
        edx = t34;
    COW_AT(1012b8fa)
        g->eax = eax;
        g->edx = edx;
        t35 = rd32(COW_IMG(0x1057876cu));
        g->esp = sp0 - 0x40u;
        t36 = cow_thiscall(g, COW_IMG(0x101598b0u), t35, 0);
        t37 = g->ecx;
        t38 = g->edx;
        if (rd16(t36 + 0x210u) == 0u)
        {
            eax = t36;
            ecx = t37;
            edx = t38;
    COW_AT(1012b916)
            eax = eax + 0x7cu;
        }
        else
        {
            eax = t36;
            ecx = t37;
            edx = t38;
    COW_AT(1012b90f)
            eax = eax + 0x214u;
        }
    COW_AT(1012b919)
        wr32(sp0 - 0x44u, eax);
        wr32(sp0 - 0x48u, COW_IMG(0x1036f5c8u));
        wr32(sp0 - 0x4cu, sp0 - 0x40u);
        g->esp = sp0 - 0x38u;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x40u, COW_IMG(0x1036f5c8u), eax, rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu));
        wr32(sp0 - 0x44u, sp0 - 0x40u);
        eax = sp0 - 0x40u;
        loc_44 = sp0 - 0x40u;
    }
    COW_AT(1012b938)
    g->eax = eax;
    g->edx = rd32(rd32(COW_IMG(0x10662d40u)));
    t39 = rd32(rd32(COW_IMG(0x10662d40u)));
    g->esp = sp0 - 0x40u;
    t40 = cow_thiscall(g, rd32(t39 + 0x24u), rd32(COW_IMG(0x10662d40u)), 1, loc_44);
    t41 = g->edx;
    wr32(sp0 - 0x44u, COW_IMG(0x1036f5b4u));
    cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1036f5b4u));
    return;
L_1012b958: ;
    COW_AT(1012b958)
    if (ecx == 0u)
    {
        edx = arg1 - 1u;
    }
    else
    {
    COW_AT(1012b95c)
        g->esp = sp0 - 0x40u;
        t26 = cow_call_regs(g, COW_IMG(0x101597f0u), eax, ecx, arg1 - 1u, 1, 0);
        t27 = g->edx;
        if (t26 == 0u)
        {
            eax = t26;
            edx = t27;
        }
        else
        {
            eax = t26;
            edx = t27;
    COW_AT(1012b965)
            if (rd32(COW_IMG(0x1057876cu)) != 0u)
            {
                ecx = rd32(COW_IMG(0x1057876cu));
    COW_AT(1012b973)
                g->esp = sp0 - 0x40u;
                t28 = cow_call_regs(g, COW_IMG(0x101597f0u), eax, ecx, edx, 1, 0);
                t29 = g->ecx;
                t30 = g->edx;
                eax = t28;
                ecx = t29;
                edx = t30;
            }
            else
            {
                ecx = rd32(COW_IMG(0x1057876cu));
    COW_AT(1012b96f)
                eax = 0u;
            }
    COW_AT(1012b978)
            wr32(sp0 - 0x44u, 0u);
            wr32(sp0 - 0x48u, 0u);
            wr32(sp0 - 0x4cu, 0u);
            wr32(sp0 - 0x50u, 0u);
            wr32(sp0 - 0x54u, eax);
            g->edx = edx;
            g->esp = sp0 - 0x40u;
            t31 = cow_call_regs(g, COW_IMG(0x1007bf30u), eax, g->ecx, g->edx, 1, 5, eax, 0u, 0u, 0u, 0u);
            t32 = g->edx;
            eax = t31;
            edx = t32;
        }
    }
    COW_AT(1012b989)
    wr32(sp0 - 0x44u, COW_IMG(0x1036f5b4u));
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1036f5b4u));
    return;
L_1012b99e: ;
    COW_AT(1012b99e)
    wr32(sp0 - 0x44u, 0u);
    wr32(sp0 - 0x48u, 1u);
    wr32(sp0 - 0x4cu, COW_IMG(0x1036f5a0u));
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1036f5a0u), 1u, 0u);
    return;
L_1012b9b7: ;
    COW_AT(1012b9b7)
    wr32(sp0 - 0x44u, 0x100u);
    wr32(sp0 - 0x48u, 0u);
    wr32(sp0 - 0x4cu, 0u);
    g->esp = sp0 - 0x40u;
    cow_cdecl(g, COW_IMG(0x1022b220u), 3, 0u, 0u, 0x100u);
    return;
L_1012b9ce: ;
    COW_AT(1012b9ce)
    wr32(sp0 - 0x44u, 1u);
    wr32(sp0 - 0x48u, 0u);
    g->edx = arg1 - 1u;
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, COW_IMG(0x1021c7a0u), rd32(COW_IMG(0x10666e2cu)), 2, 0u, 1u);
    t25 = g->edx;
    wr32(sp0 - 0x44u, rd32(COW_IMG(0x10663758u)));
    cow_thiscall(g, COW_IMG(0x101f23a0u), rd32(COW_IMG(0x10663740u)), 1, rd32(COW_IMG(0x10663758u)));
    return;
L_1012b9f4: ;
    COW_AT(1012b9f4)
    g->eax = eax;
    g->edx = arg1 - 1u;
    g->esp = sp0 - 0x40u;
    t23 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
    t24 = g->edx;
    if (t23 == 0u) goto L_1012bc26;
    eax = t23;
    edx = t24;
    COW_AT(1012ba06)
    if (rd32(rd32(eax + 0x70u) + 0x170u) == 1u) goto L_1012ba26;
    ecx = rd32(eax + 0x70u);
    COW_AT(1012ba12)
    wr32(sp0 - 0x44u, 0u);
    wr32(sp0 - 0x48u, 0u);
    wr32(sp0 - 0x4cu, 0u);
    g->esp = sp0 - 0x3cu;
    cow_call_regs(g, COW_IMG(0x101347b0u), eax, ecx, edx, 1, 4, 0u, 0u, 0u, rd32(sp0 - 0x40u));
    return;
L_1012ba26: ;
    COW_AT(1012ba26)
    wr32(sp0 - 0x44u, 0x20u);
    wr32(sp0 - 0x48u, COW_IMG(0x1012bec0u));
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, COW_IMG(0x10159440u), rd32(COW_IMG(0x1057876cu)), 2, COW_IMG(0x1012bec0u), 0x20u);
    return;
L_1012ba3e: ;
    COW_AT(1012ba3e)
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, COW_IMG(0x1013f060u), rd32(COW_IMG(0x10578214u)), 0);
    return;
L_1012ba4f: ;
    COW_AT(1012ba4f)
    wr32(sp0 - 0x44u, 0u);
    wr32(sp0 - 0x48u, COW_IMG(0x1036f598u));
    g->esp = sp0 - 0x40u;
    cow_cdecl(g, COW_IMG(0x10080dc0u), 2, COW_IMG(0x1036f598u), 0u);
    return;
L_1012ba64: ;
    COW_AT(1012ba64)
    g->eax = eax;
    g->edx = arg1 - 1u;
    t19 = rd32(COW_IMG(0x1057823cu));
    g->esp = sp0 - 0x40u;
    t20 = cow_thiscall(g, COW_IMG(0x1013fe70u), t19, 0);
    t21 = g->ecx;
    t22 = g->edx;
    if ((uint8_t)t20 != 0u) goto L_1012bc26;
    eax = t20;
    ecx = t21;
    edx = t22;
    COW_AT(1012ba77)
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    return;
L_1012ba82: ;
    COW_AT(1012ba82)
    g->eax = eax;
    g->edx = arg1 - 1u;
    g->esp = sp0 - 0x40u;
    t17 = cow_thiscall(g, COW_IMG(0x10157850u), ecx, 0);
    t18 = g->edx;
    wr32(sp0 - 0x44u, 0x20u);
    wr32(sp0 - 0x48u, COW_IMG(0x1012be70u));
    cow_thiscall(g, COW_IMG(0x10159440u), rd32(COW_IMG(0x1057876cu)), 2, COW_IMG(0x1012be70u), 0x20u);
    return;
L_1012ba9f: ;
    COW_AT(1012ba9f)
    if (eax == 0u) goto L_1012bc26;
    COW_AT(1012baa7)
    t14 = rd32(eax + 4u);
    wr32(sp0 - 0x44u, t14);
    wr32(sp0 - 0x48u, COW_IMG(0x1036f5e8u));
    wr32(sp0 - 0x4cu, sp0 - 0x40u);
    g->eax = sp0 - 0x40u;
    g->edx = t14;
    g->esp = sp0 - 0x38u;
    t15 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x40u, COW_IMG(0x1036f5e8u), t14, rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu));
    t16 = g->edx;
    wr32(sp0 - 0x50u, 0u);
    wr32(sp0 - 0x54u, sp0 - 0x40u);
    g->esp = sp0 - 0x4cu;
    cow_cdecl(g, COW_IMG(0x10080dc0u), 2, sp0 - 0x40u, 0u);
    return;
L_1012bacf: ;
    COW_AT(1012bacf)
    wr32(sp0 - 0x44u, 0u);
    wr32(sp0 - 0x48u, COW_IMG(0x1036f590u));
    g->esp = sp0 - 0x40u;
    cow_cdecl(g, COW_IMG(0x10080dc0u), 2, COW_IMG(0x1036f590u), 0u);
    return;
L_1012bae4: ;
    COW_AT(1012bae4)
    wr32(sp0 - 0x44u, 0u);
    wr32(sp0 - 0x48u, 1u);
    wr32(sp0 - 0x4cu, 0u);
    wr32(sp0 - 0x50u, 0u);
    wr32(sp0 - 0x54u, 0x4du);
    wr32(sp0 - 0x58u, 0xeu);
    g->eax = eax;
    g->edx = arg1 - 1u;
    g->esp = sp0 - 0x50u;
    t12 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x4du);
    t13 = g->edx;
    wr32(sp0 - 0x54u, t12);
    wr32(sp0 - 0x58u, 0u);
    wr32(sp0 - 0x5cu, COW_IMG(0x1012bca0u));
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, COW_IMG(0x10210e30u), rd32(COW_IMG(0x10664520u)), 7, COW_IMG(0x1012bca0u), 0u, t12, 0u, 0u, 1u, 0u);
    return;
L_1012bb11: ;
    COW_AT(1012bb11)
    if (eax == 0u) goto L_1012bc26;
    COW_AT(1012bb19)
    wr32(sp0 - 0x44u, 0u);
    t10 = (arg1 - 1u & 0xffff0000u) | rd16(eax);
    wr32(sp0 - 0x48u, t10);
    t11 = rd32(eax + 4u);
    wr32(sp0 - 0x4cu, t11);
    g->esp = sp0 - 0x40u;
    cow_cdecl(g, COW_IMG(0x100e8fd0u), 3, t11, t10, 0u);
    return;
L_1012bb31: ;
    COW_AT(1012bb31)
    wr32(sp0 - 0x44u, 0u);
    wr32(sp0 - 0x48u, 1u);
    wr32(sp0 - 0x4cu, 0u);
    wr32(sp0 - 0x50u, 0u);
    wr32(sp0 - 0x54u, 0xb8u);
    wr32(sp0 - 0x58u, 0xbu);
    g->eax = eax;
    g->edx = arg1 - 1u;
    g->esp = sp0 - 0x50u;
    t8 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xbu, 0xb8u);
    t9 = g->edx;
    wr32(sp0 - 0x54u, t8);
    wr32(sp0 - 0x58u, 0u);
    wr32(sp0 - 0x5cu, COW_IMG(0x1012bcc0u));
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, COW_IMG(0x10210e30u), rd32(COW_IMG(0x10664520u)), 7, COW_IMG(0x1012bcc0u), 0u, t8, 0u, 0u, 1u, 0u);
    return;
L_1012bb61: ;
    COW_AT(1012bb61)
    wr32(sp0 - 0x44u, 0u);
    wr32(sp0 - 0x48u, COW_IMG(0x1036f588u));
    g->esp = sp0 - 0x40u;
    cow_cdecl(g, COW_IMG(0x10080dc0u), 2, COW_IMG(0x1036f588u), 0u);
    return;
L_1012bb76: ;
    COW_AT(1012bb76)
    wr32(sp0 - 0x44u, 0u);
    wr32(sp0 - 0x48u, COW_IMG(0x1036f580u));
    g->esp = sp0 - 0x40u;
    cow_cdecl(g, COW_IMG(0x10080dc0u), 2, COW_IMG(0x1036f580u), 0u);
    return;
L_1012bb8b: ;
    COW_AT(1012bb8b)
    wr32(sp0 - 0x44u, 0u);
    wr32(sp0 - 0x48u, COW_IMG(0x1036f578u));
    g->esp = sp0 - 0x40u;
    cow_cdecl(g, COW_IMG(0x10080dc0u), 2, COW_IMG(0x1036f578u), 0u);
    return;
L_1012bba0: ;
    COW_AT(1012bba0)
    wr32(sp0 - 0x44u, 0u);
    wr32(sp0 - 0x48u, 0u);
    wr32(sp0 - 0x4cu, 8u);
    g->esp = sp0 - 0x40u;
    cow_cdecl(g, COW_IMG(0x1022b220u), 3, 8u, 0u, 0u);
    return;
L_1012bbb4: ;
    COW_AT(1012bbb4)
    if (ecx != 0u) goto L_1012bbce;
    COW_AT(1012bbb8)
    wr32(sp0 - 0x44u, 0u);
    wr32(sp0 - 0x48u, 0u);
    wr32(sp0 - 0x4cu, 0u);
    wr32(sp0 - 0x50u, 1u);
    wr32(sp0 - 0x54u, 0u);
    g->esp = sp0 - 0x40u;
    cow_call_regs(g, COW_IMG(0x1007bf30u), 0u, g->ecx, g->edx, 1, 5, 0u, 1u, 0u, 0u, 0u);
    return;
L_1012bbce: ;
    COW_AT(1012bbce)
    g->esp = sp0 - 0x40u;
    t5 = cow_call_regs(g, COW_IMG(0x101597f0u), eax, ecx, arg1 - 1u, 1, 0);
    t6 = g->ecx;
    t7 = g->edx;
    wr32(sp0 - 0x44u, 0u);
    wr32(sp0 - 0x48u, 0u);
    wr32(sp0 - 0x4cu, 0u);
    wr32(sp0 - 0x50u, 1u);
    wr32(sp0 - 0x54u, t5);
    cow_call_regs(g, COW_IMG(0x1007bf30u), t5, g->ecx, g->edx, 1, 5, t5, 1u, 0u, 0u, 0u);
    return;
L_1012bbea: ;
    COW_AT(1012bbea)
    if (eax == 0u) goto L_1012bc26;
    COW_AT(1012bbee)
    g->eax = eax;
    g->edx = arg1 - 1u;
    g->esp = sp0 - 0x40u;
    t3 = cow_thiscall(g, COW_IMG(0x101598b0u), ecx, 0);
    t4 = g->edx;
    if (rd16(t3 + 0x210u) == 0u)
    {
        eax = t3;
        edx = t4;
    COW_AT(1012bc04)
        eax = eax + 0x7cu;
    }
    else
    {
        eax = t3;
        edx = t4;
    COW_AT(1012bbfd)
        eax = eax + 0x214u;
    }
    COW_AT(1012bc07)
    wr32(sp0 - 0x44u, eax);
    wr32(sp0 - 0x48u, COW_IMG(0x1036f560u));
    loc_44 = eax;
    loc_48 = COW_IMG(0x1036f560u);
    goto L_1012bc0d;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1012b880(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1012b88du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x1012b891u:
    {
        uint32_t ecx;
        uint32_t in_eax;
        uint32_t in_edx;
        in_eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x1012b89cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x1012b8aau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0 - 0x40u;
        g->edx = arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1012b8b1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0 - 0x40u;
        g->edx = arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1012b8b9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0 - 0x40u;
        g->edx = arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1012b8c7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0 - 0x40u;
        g->edx = arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1012b8dcu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0 - 0x40u;
        g->edx = arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1012b8f1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0 - 0x40u;
        g->edx = arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1012b8fau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x1012b90fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x1012b916u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x1012b919u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x1012b933u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x1012b938u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_44;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x1012b958u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0 - 0x40u;
        g->edx = arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1012b95cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0 - 0x40u;
        g->edx = arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1012b965u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x1012b96fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x1012b973u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x1012b978u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x1012b989u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_44;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x1012b99eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0 - 0x40u;
        g->edx = arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1012b9b7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0 - 0x40u;
        g->edx = arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1012b9ceu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0 - 0x40u;
        g->edx = arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1012b9f4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0 - 0x40u;
        g->edx = arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1012ba06u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x1012ba12u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x1012ba26u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x1012ba3eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0 - 0x40u;
        g->edx = arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1012ba4fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0 - 0x40u;
        g->edx = arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1012ba64u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0 - 0x40u;
        g->edx = arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1012ba77u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x1012ba82u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0 - 0x40u;
        g->edx = arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1012ba9fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x1012baa7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x1012bacfu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0 - 0x40u;
        g->edx = arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1012bae4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0 - 0x40u;
        g->edx = arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1012bb11u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0 - 0x40u;
        g->edx = arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1012bb19u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0 - 0x40u;
        g->edx = arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1012bb31u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0 - 0x40u;
        g->edx = arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1012bb61u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0 - 0x40u;
        g->edx = arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1012bb76u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0 - 0x40u;
        g->edx = arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1012bb8bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0 - 0x40u;
        g->edx = arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1012bba0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0 - 0x40u;
        g->edx = arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1012bbb4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0 - 0x40u;
        g->edx = arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1012bbb8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0 - 0x40u;
        g->edx = arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1012bbceu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0 - 0x40u;
        g->edx = arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1012bbeau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0 - 0x40u;
        g->edx = arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1012bbeeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0 - 0x40u;
        g->edx = arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1012bbfdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x1012bc04u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x1012bc07u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x1012bc0du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_44;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x1012bc26u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1012b880(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1012b880(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
