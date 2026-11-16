/* f_0x10217a40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10217a40(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebp;
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
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;

    wr16(self + 0x4cu, 0u);
    wr16(self + 0x14u, 0u);
    wr16(self + 0x4eu, 1u);
    wr16(self + 0x28u, 0u);
    wr16(self + 0x2au, 0x1f4u);
    wr16(self + 0x2cu, 0xc8u);
    wr16(self + 0x2eu, 0x14u);
    wr16(self + 0x30u, 0x3cu);
    wr16(self + 0x32u, 8u);
    wr16(self + 0x34u, 0x14u);
    wr16(self + 0x36u, 0xau);
    wr16(self + 0x38u, 0x14u);
    wr16(self + 0x44u, 0xau);
    wr16(self + 0x46u, 0x19u);
    wr16(self + 0x48u, 0xfu);
    wr16(self + 0x26u, 0xau);
    wr16(self + 0x3au, 0x14u);
    wr16(self + 0x3cu, 0x14u);
    wr16(self + 0x3eu, 0xau);
    wr16(self + 0x40u, 0xau);
    wr16(self + 0x42u, 0xfu);
    wr16(self + 0x22u, 0u);
    wr16(self + 0x24u, 0u);
    wr16(self + 0x258u, 0u);
    wr16(self + 0x348u, 0u);
    wr16(self + 0x34au, 0u);
    wr32(self + 0x36cu, 0xffffffffu);
    wr32(self + 0x370u, 0u);
    wr32(self + 0x374u, 0u);
    wr32(self + 0x378u, 0u);
    wr32(self + 0x18u, 0u);
    wr16(self + 0x1cu, 0u);
    wr8(self + 0x20u, 0u);
    wr8(self + 0x4au, 1u);
    wr32(self + 0x2a8u, 0u);
    wr16(self + 0x2c2u, 0u);
    wr32(self + 0x344u, 0u);
    edx = 0xfu;
    ebp = 0x20u;
    edi = self + 0x2c4u;
L_10217b1c: ;
    if (rd32(edi) == 0u)
    {
        ecx = rd32(edi);
    }
    else
    {
        ecx = rd32(edi);
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, rd32(rd32(ecx) + 0xcu), ecx, 1, 1u);
        t1 = g->ecx;
        t2 = g->edx;
        ecx = t1;
        edx = t2;
    }
    g->esp = sp0 - 8u;
    t3 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x6b4u, in_edi, in_esi);
    t4 = g->ecx;
    t5 = g->edx;
    if (t3 == 0u)
    {
        ecx = t4;
        edx = t5;
        eax = 0u;
    }
    else
    {
        eax = t3;
        edx = t5;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t6 = cow_thiscall(g, COW_IMG(0x101c5be0u), eax, 8, 8u, 0x96u, self, COW_IMG(0x102176d0u), COW_IMG(0x103d3c84u), 0x14au, 0x3cu, 0x78u);
        t7 = g->ecx;
        t8 = g->edx;
        eax = t6;
        ecx = t7;
        edx = t8;
    }
    wr32(edi, eax);
    if (ebp != 1u)
    {
        ebp = ebp - 1u;
        edi = edi + 4u;
        goto L_10217b1c;
    }
    wr8(COW_IMG(0x10664550u), 0u);
    wr8(COW_IMG(0x1066469bu), 0xffu);
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_stdcall(g, COW_IMG(0x10113250u), 0);
    t9 = g->edx;
    g->ebx = 0u;
    g->edx = t9;
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10385d64u), 1u, 0u);
    t10 = g->edx;
    if (rd32(COW_IMG(0x104e170cu)) == 0u)
    {
        edx = t10;
        goto L_10217bc5;
    }
    ecx = rd32(COW_IMG(0x104e170cu));
    edx = t10;
    if (rd32(ecx + 0x8e8u) == 4u) goto L_10217bba;
    eax = rd32(ecx + 0x8e8u);
    if (eax == 5u) goto L_10217bba;
    if (eax != 7u) goto L_10217c40;
    g->esp = sp0 - 0x10u;
    cow_fastcall(g, COW_IMG(0x1010a5f0u), ecx, edx, 1, 0u);
    g->ebx = in_ebx;
    return;
L_10217bba: ;
    g->esp = sp0 - 0x10u;
    cow_fastcall(g, COW_IMG(0x1010a550u), ecx, edx, 1, 0u);
    g->ebx = in_ebx;
    return;
L_10217bc5: ;
    if ((int8_t)rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) >= 0)
    {
        eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
        ecx = rd32(COW_IMG(0x10456a28u));
        edx = (edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
        goto L_10217beb;
    }
    eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
    ecx = rd32(COW_IMG(0x10456a28u));
    edx = (edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
    if (eax == 2u) goto L_10217be4;
    if (eax != 3u)
    {
        cf = eax < 3u;
        zf = eax == 3u;
        goto L_10217bee;
    }
L_10217be4: ;
    eax = 1u;
L_10217bf0: ;
    t11 = rd32(COW_IMG(0x10217c48u) + eax * 4u);
    switch (t11 - RD)
    {
    case 0x10217bf7u: goto L_10217bf7;
    case 0x10217bfbu: goto L_10217bfb;
    case 0x10217c02u: goto L_10217c02;
    case 0x10217c09u: goto L_10217c09;
    default: rt_fatal(g, COW_IMG(0x10217bf0u), "switch");
    }
    return;
L_10217beb: ;
    cf = eax < 3u;
    zf = eax == 3u;
L_10217bee: ;
    if (!cf && !zf)
    {
        esi = 1u;
        goto L_10217c0e;
    }
    goto L_10217bf0;
L_10217bf7: ;
    esi = 0u;
L_10217c0e: ;
    g->esp = sp0 - 8u;
    t12 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x904u, in_edi, in_esi);
    t13 = g->ecx;
    t14 = g->edx;
    if (t12 == 0u) goto L_10217c3a;
    ecx = t13;
    edx = t14;
    edi = t12;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t15 = cow_stdcall(g, COW_IMG(0x10115220u), 0);
    t16 = g->edx;
    t17 = cow_thiscall(g, COW_IMG(0x10112bd0u), edi, 3, esi, 0u, t15);
    wr32(COW_IMG(0x104e170cu), t17);
    g->ebx = in_ebx;
    return;
L_10217bfb: ;
    esi = 1u;
    goto L_10217c0e;
L_10217c02: ;
    esi = 2u;
    goto L_10217c0e;
L_10217c09: ;
    esi = 3u;
    goto L_10217c0e;
L_10217c3a: ;
    wr32(COW_IMG(0x104e170cu), 0u);
L_10217c40: ;
    g->ebx = in_ebx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10217a40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10217a40(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
