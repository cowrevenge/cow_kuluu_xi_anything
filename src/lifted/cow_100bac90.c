/* f_0x100bac90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100bac90(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_10;
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
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 0xcu, in_esi);
    t1 = (in_edx & 0xffff0000u) | rd16(self + 0x256u);
    t2 = (rd32(self + 0x20u) & 0xffffff00u) | rd8((uint16_t)t1 + rd32(self + 0x20u) + 1u);
    if ((uint8_t)t2 > 0x1cu)
    {
        ebx = in_ebx;
        goto L_100bb101;
    }
    eax = (uint8_t)t2;
    ecx = t2;
    edx = t1;
    t3 = rd32(COW_IMG(0x100bb108u) + eax * 4u);
    switch (t3 - RD)
    {
    case 0x100bacc2u: goto L_100bacc2;
    case 0x100bacd1u: goto L_100bacd1;
    case 0x100bacf9u: goto L_100bacf9;
    case 0x100bad2au: goto L_100bad2a;
    case 0x100bad5bu: goto L_100bad5b;
    case 0x100badacu: goto L_100badac;
    case 0x100badddu: goto L_100baddd;
    case 0x100bae0au: goto L_100bae0a;
    case 0x100bae37u: goto L_100bae37;
    case 0x100bae5fu: goto L_100bae5f;
    case 0x100bae63u: goto L_100bae63;
    case 0x100bae7au: goto L_100bae7a;
    case 0x100bae9fu: goto L_100bae9f;
    case 0x100baec4u: goto L_100baec4;
    case 0x100baeecu: goto L_100baeec;
    case 0x100baf11u: goto L_100baf11;
    case 0x100baf25u: goto L_100baf25;
    case 0x100baf39u: goto L_100baf39;
    case 0x100baf54u: goto L_100baf54;
    case 0x100baf7cu: goto L_100baf7c;
    case 0x100bafa4u: goto L_100bafa4;
    case 0x100bafcau: goto L_100bafca;
    case 0x100baff0u: goto L_100baff0;
    case 0x100bb016u: goto L_100bb016;
    case 0x100bb03cu: goto L_100bb03c;
    case 0x100bb062u: goto L_100bb062;
    case 0x100bb0a2u: goto L_100bb0a2;
    default: rt_fatal(g, COW_IMG(0x100bacbbu), "switch");
    }
    return;
L_100bacc2: ;
    wr16(self + 0x256u, (uint16_t)(edx + 2u));
    return;
L_100bacd1: ;
    if (rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) != 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
        wr32(eax + 0x120u, rd32(eax + 0x120u) | 2u);
    }
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 2u));
    return;
L_100bacf9: ;
    if (rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) == 0u) goto L_100bae6d;
    eax = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
    t31 = rd32(eax + 0x120u) & 0xfffffffdu;
    wr32(eax + 0x120u, t31);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 2u));
    return;
L_100bad2a: ;
    if (rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) == 0u) goto L_100bae6d;
    eax = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
    t30 = rd32(eax + 0x120u) | 4u;
    wr32(eax + 0x120u, t30);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 2u));
    return;
L_100bad5b: ;
    if (rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) == 0u) goto L_100bae6d;
    eax = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
    if (rd32(eax + 0x174u) != 0u) goto L_100bad90;
    ecx = rd32(eax + 0x174u);
    if (rd8(eax + 0x1bcu) == 0u) goto L_100bad90;
    wr8(self + 0x25au, 1u);
    return;
L_100bad90: ;
    t29 = rd32(eax + 0x120u) & 0xfffffffbu;
    wr32(eax + 0x120u, t29);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 2u));
    return;
L_100badac: ;
    if (rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) == 0u) goto L_100bae6d;
    eax = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
    t28 = rd32(eax + 0x120u) | 8u;
    wr32(eax + 0x120u, t28);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 2u));
    return;
L_100baddd: ;
    if (rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) == 0u) goto L_100bae6d;
    eax = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
    t27 = rd32(eax + 0x120u) & 0xfffffff7u;
    wr32(eax + 0x120u, t27);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 2u));
    return;
L_100bae0a: ;
    if (rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) == 0u) goto L_100bae6d;
    eax = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
    t26 = rd32(eax + 0x128u) & 0xfffffffdu;
    wr32(eax + 0x128u, t26);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 2u));
    return;
L_100bae37: ;
    if (rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) != 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
        wr32(eax + 0x128u, rd32(eax + 0x128u) | 2u);
    }
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 2u));
    return;
L_100bae5f: ;
    wr32(sp0 - 0x10u, 1u);
    loc_10 = 1u;
L_100bae65: ;
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x10087120u), eax, g->ecx, g->edx, 1, 1, loc_10);
L_100bae6d: ;
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 2u));
    return;
L_100bae63: ;
    wr32(sp0 - 0x10u, 0u);
    loc_10 = 0u;
    goto L_100bae65;
L_100bae7a: ;
    if (rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) != 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
        wr32(eax + 0x120u, rd32(eax + 0x120u) | 0x40u);
    }
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 2u));
    return;
L_100bae9f: ;
    if (rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) != 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
        wr32(eax + 0x120u, rd32(eax + 0x120u) & 0xffffffbfu);
    }
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 2u));
    return;
L_100baec4: ;
    if (rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) != 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
        wr32(eax + 0x130u, rd32(eax + 0x130u) | 2u);
    }
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 2u));
    return;
L_100baeec: ;
    if (rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) != 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
        wr32(eax + 0x130u, rd32(eax + 0x130u) & 0xfffffffdu);
    }
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 2u));
    return;
L_100baf11: ;
    wr8(COW_IMG(0x10489900u), 1u);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 2u));
    return;
L_100baf25: ;
    wr8(COW_IMG(0x10489900u), 0u);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 2u));
    return;
L_100baf39: ;
    wr32(sp0 - 0x10u, 2u);
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t25 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
    wr32(COW_IMG(0x1035af3cu), t25);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 4u));
    return;
L_100baf54: ;
    if (rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) != 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
        wr32(eax + 0x128u, rd32(eax + 0x128u) | 0x1000000u);
    }
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 2u));
    return;
L_100baf7c: ;
    if (rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) != 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
        wr32(eax + 0x128u, rd32(eax + 0x128u) & 0xfeffffffu);
    }
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 2u));
    return;
L_100bafa4: ;
    wr32(sp0 - 0x10u, 2u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t22 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
    t23 = g->edx;
    wr32(sp0 - 0x10u, t22);
    t24 = rd16(self + 2u);
    wr32(sp0 - 0x14u, t24);
    cow_call_regs(g, COW_IMG(0x1008aa80u), g->eax, g->ecx, t23, 1, 2, t24, t22);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 4u));
    return;
L_100bafca: ;
    wr32(sp0 - 0x10u, 2u);
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t19 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
    t20 = g->ecx;
    wr32(sp0 - 0x10u, t19);
    t21 = rd16(self + 2u);
    wr32(sp0 - 0x14u, t21);
    cow_call_regs(g, COW_IMG(0x1008aad0u), g->eax, g->ecx, t21, 1, 2, t21, t19);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 4u));
    return;
L_100baff0: ;
    wr32(sp0 - 0x10u, 2u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t15 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
    t16 = g->ecx;
    t17 = g->edx;
    wr32(sp0 - 0x10u, t15);
    t18 = rd16(self + 2u);
    wr32(sp0 - 0x14u, t18);
    cow_call_regs(g, COW_IMG(0x1008ab20u), g->eax, g->ecx, t17, 1, 2, t18, t15);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 4u));
    return;
L_100bb016: ;
    wr32(sp0 - 0x10u, 2u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t12 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
    t13 = g->edx;
    wr32(sp0 - 0x10u, t12);
    t14 = rd16(self + 2u);
    wr32(sp0 - 0x14u, t14);
    cow_thiscall_cdecl(g, COW_IMG(0x1008ab70u), t14, 2, t14, t12);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 4u));
    return;
L_100bb03c: ;
    wr32(sp0 - 0x10u, 2u);
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t9 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
    t10 = g->ecx;
    wr32(sp0 - 0x10u, t9);
    t11 = rd16(self + 2u);
    wr32(sp0 - 0x14u, t11);
    cow_call_regs(g, COW_IMG(0x1008aba0u), g->eax, g->ecx, t11, 1, 2, t11, t9);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 4u));
    return;
L_100bb062: ;
    if (rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) != 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
        t8 = rd32(eax + 0x13cu) ^ (((uint32_t)(int8_t)((uint8_t)ecx == 0x19u) << 0x13u ^ rd32(eax + 0x13cu)) & 0x80000u);
        wr32(eax + 0x13cu, t8);
    }
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 2u));
    return;
L_100bb0a2: ;
    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, sp0 - 8u);
    wr32(sp0 - 0x18u, sp0 - 4u);
    wr32(sp0 - 0x1cu, 2u);
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t4 = cow_thiscall(g, COW_IMG(0x100afac0u), self, 1, 2u);
    t5 = g->edx;
    wr32(sp0 - 0x1cu, t4);
    g->esp = sp0 - 0x10u;
    t6 = cow_fastcall(g, COW_IMG(0x100afb00u), self, t5, 3, t4, sp0 - 4u, sp0 - 8u);
    if ((uint8_t)t6 == 1u)
    {
        ebx = (uint8_t)ecx == 0x1bu;
        if (rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 8u) * 4u) != 0u)
        {
            ecx = rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 8u) * 4u);
            t7 = (ebx & 1u) << 0x13u ^ (rd32(ecx + 0x13cu) & 0xfff7ffffu);
            wr32(ecx + 0x13cu, t7);
        }
    }
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 6u));
    ebx = rd32(sp0 - 0x10u);
L_100bb101: ;
    g->ebx = ebx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100bac90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100bac90(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
