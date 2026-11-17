/* f_0x10268a00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10268a00(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(sp0 + 4u);
    wr32(self + 0xcu, 0u);
    wr32(self + 4u, 0u);
    wr32(self + 8u, t1);
    if (t1 == 0u) goto L_10268bbc;
    eax = t1;
    g->eax = eax << 4u;
    g->esp = sp0 - 4u;
    t2 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, self, in_edx, 1, 3, eax << 4u, in_edi, in_esi);
    t3 = g->ecx;
    t4 = g->edx;
    wr32(self, t2);
    if (t2 != 0u)
    {
        ecx = t3;
        edx = t4;
        goto L_10268a4f;
    }
    wr32(self + 8u, 0u);
    if (arg3 == 0u) goto L_10268bbe;
    wr32(arg3, 0x8007000eu);
    return self;
L_10268a4f: ;
    t5 = rd32(self + 8u);
    wr32(sp0 + 4u, 0u);
    if (t5 == 0u) goto L_10268bbe;
    t6 = 0xfffffff8u - rd32(sp0 + 8u);
    t7 = rd32(sp0 + 8u);
    wr32(sp0 + 8u, t6);
    ebp = t7 + 8u;
    edi = t6;
L_10268a72: ;
    t8 = rd32(self);
    t9 = rd16(ebp - 8u);
    wr16(ebp + edi + t8, (uint16_t)t9);
    if ((uint16_t)t9 - 2u > 0xfu) goto L_10268b9b;
    eax = (uint16_t)t9 - 2u;
    ebx = ebp + edi + t8;
    t10 = rd32(COW_IMG(0x10268bc8u) + eax * 4u);
    switch (t10 - RD)
    {
    case 0x10268a98u: goto L_10268a98;
    case 0x10268aa3u: goto L_10268aa3;
    case 0x10268aaeu: goto L_10268aae;
    case 0x10268abbu: goto L_10268abb;
    case 0x10268ac8u: goto L_10268ac8;
    case 0x10268ad3u: goto L_10268ad3;
    case 0x10268ae4u: goto L_10268ae4;
    case 0x10268af5u: goto L_10268af5;
    case 0x10268b81u: goto L_10268b81;
    case 0x10268b8fu: goto L_10268b8f;
    case 0x10268b9bu: goto L_10268b9b;
    default: rt_fatal(g, COW_IMG(0x10268a91u), "switch");
    }
    return 0;
L_10268a98: ;
    wr32(ebx + 8u, rd32(ebp));
L_10268b9b: ;
    t31 = rd32(sp0 + 4u) + 1u;
    t32 = rd32(self + 8u);
    t33 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t31);
    if (t33 + 1u < t32)
    {
        ecx = t32;
        ebp = ebp + 0x10u;
        goto L_10268a72;
    }
    return self;
L_10268aa3: ;
    wr8(ebx + 8u, rd8(ebp));
    goto L_10268b9b;
L_10268aae: ;
    t30 = rd16(ebp);
    wr16(ebx + 8u, (uint16_t)t30);
    edx = (edx & 0xffff0000u) | t30;
    goto L_10268b9b;
L_10268abb: ;
    wr16(ebx + 8u, rd16(ebp));
    goto L_10268b9b;
L_10268ac8: ;
    wr32(ebx + 8u, rd32(ebp));
    goto L_10268b9b;
L_10268ad3: ;
    t28 = rd32(ebp);
    wr32(ebx + 8u, t28);
    t29 = rd32(ebp + 4u);
    wr32(ebx + 0xcu, t29);
    edx = t28;
    goto L_10268b9b;
L_10268ae4: ;
    wr32(ebx + 8u, rd32(ebp));
    t27 = rd32(ebp + 4u);
    wr32(ebx + 0xcu, t27);
    edx = t27;
    goto L_10268b9b;
L_10268af5: ;
    if (rd32(ebp) != 0u)
    {
        eax = rd32(ebp);
        t18 = (edi & 0xffff0000u) | rd16(eax - 2u);
        t19 = (uint16_t)t18 * 2u + 2u;
        g->eax = t19;
        g->esp = sp0 - 0xcu;
        t20 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, t19, in_ebp, in_ebx);
        if (t20 == 0u)
        {
            t24 = rd32(sp0 + 4u);
            wr32(self + 8u, t24);
            if (arg3 != 0u)
            {
                wr32(arg3, 0x8007000eu);
            }
            t25 = rd32(ebp);
            t26 = rd32(sp0 + 8u);
            wr32(ebx + 8u, t25);
            edx = t25;
            edi = t26;
        }
        else
        {
            eax = t20;
            esi = (uint16_t)t18;
            edi = t18;
            wr16(eax, (uint16_t)edi);
            wr32(ebx + 8u, eax + 2u);
            t21 = rd32(ebp);
            esi = t21;
            edi = eax + 2u;
            ecx = esi * 2u >> 2u;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            ecx = esi * 2u & 3u;
            while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
            t22 = rd32(ebp);
            t23 = rd32(sp0 + 8u);
            wr32(ebx + 8u, t22);
            edx = t22;
            edi = t23;
        }
    }
    else
    {
        eax = rd32(ebp);
        t16 = rd32(sp0 + 8u);
        wr32(ebx + 8u, eax);
        t17 = rd32(ebp);
        wr32(ebx + 8u, t17);
        edx = t17;
        edi = t16;
    }
    goto L_10268b9b;
L_10268b81: ;
    t14 = rd32(ebp);
    wr32(ebx + 8u, t14);
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, rd32(rd32(t14) + 4u), rd32(t14), 1, t14);
    t15 = g->edx;
    edx = t15;
    goto L_10268b9b;
L_10268b8f: ;
    t11 = rd32(ebp);
    wr32(ebx + 8u, t11);
    g->edx = rd32(t11);
    t12 = rd32(t11);
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, rd32(t12 + 4u), ecx, 1, t11);
    t13 = g->edx;
    edx = t13;
    goto L_10268b9b;
L_10268bbc: ;
    wr32(self, 0u);
L_10268bbe: ;
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10268a00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10268a00(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
