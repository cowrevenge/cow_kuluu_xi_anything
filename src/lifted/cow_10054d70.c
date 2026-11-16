/* f_0x10054d70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10054d70(Guest* g)
{
    double d21;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 152u);

    wr32(sp0 - 0x74u, in_esi);
    if (rd32(rd32(COW_IMG(0x1047bb88u)) + 4u) != 0u)
    {
        eax = rd32(COW_IMG(0x1047bb88u));
        ecx = rd32(rd32(COW_IMG(0x1047bb88u)) + 4u);
        goto L_10054d89;
    }
    eax = rd32(COW_IMG(0x1047bb88u));
    return eax & 0xffffff00u;
L_10054d89: ;
    wr32(sp0 - 0x78u, in_edi);
    t1 = rd32(eax + 0xcu);
    wr32(sp0 - 0x7cu, t1);
    t2 = rd32(eax + 8u);
    wr32(sp0 - 0x80u, t2);
    wr32(sp0 - 0x84u, ecx);
    g->esp = sp0 - 0x78u;
    cow_thiscall(g, COW_IMG(0x1006a060u), rd32(COW_IMG(0x1047bfa8u)), 3, ecx, t2, t1);
    wr32(sp0 - 0x7cu, 0u);
    wr32(sp0 - 0x80u, 0x3f800000u);
    wr32(sp0 - 0x84u, 0u);
    wr32(sp0 - 0x88u, 3u);
    wr32(sp0 - 0x8cu, 0u);
    wr32(sp0 - 0x90u, 0u);
    t3 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    wr32(sp0 - 0x94u, t3);
    g->eax = t3;
    g->edx = rd32(rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu));
    t4 = rd32(rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu));
    t5 = cow_thiscall(g, rd32(t4 + 0x90u), rd32(COW_IMG(0x1047bfa8u)), 7, t3, 0u, 0u, 3u, 0u, 0x3f800000u, 0u);
    t6 = g->edx;
    g->edx = t6;
    t7 = cow_thiscall(g, COW_IMG(0x1006a420u), rd32(COW_IMG(0x1047bfa8u)), 0);
    t8 = g->edx;
    cow_thiscall(g, COW_IMG(0x1006a4c0u), rd32(COW_IMG(0x1047bfa8u)), 0);
    edi = sp0 - 0x58u;
    eax = 0u;
    ecx = 6u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x54u, 0u);
    wr32(sp0 - 0x50u, 0x100u);
    wr32(sp0 - 0x4cu, 0x100u);
    wr32(sp0 - 0x58u, 0u);
    wr32(sp0 - 0x48u, 0u);
    wr32(sp0 - 0x44u, 0x3f800000u);
    wr32(sp0 - 0x7cu, sp0 - 0x58u);
    t9 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    wr32(sp0 - 0x80u, t9);
    g->eax = t9;
    g->edx = sp0 - 0x58u;
    t10 = rd32(t9);
    t11 = cow_thiscall(g, rd32(t10 + 0xa0u), t10, 2, t9, sp0 - 0x58u);
    t12 = g->ecx;
    t13 = g->edx;
    if (rd8(COW_IMG(0x1047bc78u)) & 1u)
    {
        edx = t13;
    }
    else
    {
        eax = (t11 & 0xffffff00u) | rd8(COW_IMG(0x1047bc78u));
        ecx = t12;
        edx = t13;
        wr32(sp0 - 0x7cu, COW_IMG(0x10054f70u));
        wr32(COW_IMG(0x1047bc7cu), 0u);
        wr8(COW_IMG(0x1047bc78u), (uint8_t)(eax | 1u));
        wr32(COW_IMG(0x1047bc80u), 0u);
        wr32(COW_IMG(0x1047bc84u), 0xbf800000u);
        g->edx = (edx & 0xffffff00u) | (uint8_t)(eax | 1u);
        g->esp = sp0 - 0x78u;
        cow_cdecl(g, COW_IMG(0x103134c6u), 1, COW_IMG(0x10054f70u));
        t14 = g->edx;
        edx = t14;
    }
    t15 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) + 1u;
    t16 = rd32(COW_IMG(0x1047cf7cu));
    t17 = rd32(rd32(COW_IMG(0x1047cf7cu)) + rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) * 4u + 0xa10u);
    wr32(t16 + 0xa90u, t15);
    wr32(sp0 - 0x7cu, t17);
    g->esp = sp0 - 0x78u;
    cow_thiscall(g, COW_IMG(0x1006a4a0u), rd32(COW_IMG(0x1047bfa8u)), 1, t17);
    wr32(sp0 - 0x7cu, COW_IMG(0x1047bc7cu));
    t18 = rd32(t17 + 0x30u);
    wr32(sp0 - 0x70u, t18);
    t19 = rd32(t17 + 0x34u);
    wr32(sp0 - 0x6cu, t19);
    wr32(sp0 - 0x64u, t18);
    wr32(sp0 - 0x60u, t19);
    t20 = rd32(t17 + 0x38u);
    wr32(sp0 - 0x68u, t20);
    wr32(sp0 - 0x5cu, t20);
    d21 = (double)(float)fr(g, cow_bits2f(t19) - (double)rdf32(COW_IMG(0x10329990u)));
    wrf32(sp0 - 0x60u, (float)d21);
    wr32(sp0 - 0x80u, sp0 - 0x70u);
    wr32(sp0 - 0x84u, sp0 - 0x64u);
    wr32(sp0 - 0x88u, sp0 - 0x40u);
    g->edx = sp0 - 0x40u;
    cow_stdcall(g, COW_IMG(0x102d8019u), 4, sp0 - 0x40u, sp0 - 0x64u, sp0 - 0x70u, COW_IMG(0x1047bc7cu));
    t22 = g->edx;
    wr32(sp0 - 0x7cu, sp0 - 0x40u);
    wr32(sp0 - 0x80u, 2u);
    g->edx = t22;
    cow_thiscall(g, COW_IMG(0x1000bd50u), rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xdc8u), 2, 2u, sp0 - 0x40u);
    t23 = g->edx;
    t24 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) + 1u;
    t25 = rd32(COW_IMG(0x1047cf7cu));
    t26 = rd32(rd32(COW_IMG(0x1047cf7cu)) + rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) * 4u + 0xa10u);
    wr32(t25 + 0xa90u, t24);
    cow_thiscall(g, COW_IMG(0x100746a0u), t26, 0);
    wr32(sp0 - 0x7cu, t17);
    wr32(t26 + 0x28u, 0x3e800000u);
    wr32(t26 + 0x14u, 0x3e800000u);
    wr32(t26, 0x3e800000u);
    wr32(sp0 - 0x80u, t26);
    wr32(sp0 - 0x84u, t17);
    g->eax = 0x3e800000u;
    g->edx = rd32(rd32(COW_IMG(0x1047cf7cu)));
    t27 = rd32(rd32(COW_IMG(0x1047cf7cu)));
    t28 = cow_thiscall(g, rd32(t27 + 0x24u), rd32(COW_IMG(0x1047cf7cu)), 3, t17, t26, t17);
    t29 = g->edx;
    wr32(sp0 - 0x7cu, t17);
    cow_thiscall(g, COW_IMG(0x1006a480u), rd32(COW_IMG(0x1047bfa8u)), 1, t17);
    t30 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) - 1u;
    t31 = rd32(COW_IMG(0x1047cf7cu));
    wr32(t31 + 0xa90u, t30);
    wr32(t30 * 4u + t31 + 0xa10u, t26);
    t32 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) - 1u;
    t33 = rd32(COW_IMG(0x1047cf7cu));
    t34 = rd32(sp0 - 0x78u);
    wr32(t33 + 0xa90u, t32);
    wr32(t32 * 4u + t33 + 0xa10u, t17);
    g->esi = rd32(sp0 - 0x74u);
    g->edi = t34;
    return (t33 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10054d70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10054d70(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
