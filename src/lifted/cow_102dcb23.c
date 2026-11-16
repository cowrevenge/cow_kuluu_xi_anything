/* f_0x102dcb23 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102dcb23(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t loc_8;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;

    if (rd32(sp0 + 8u) < 4u) goto L_102dcb4e;
    if (rd32(rd32(sp0 + 4u)) != 0x20534444u) goto L_102dcb4e;
    eax = rd32(sp0 + 4u);
    wr32(sp0 + 8u, rd32(sp0 + 8u) - 4u);
    if (rd32(sp0 + 8u) >= 0x7cu)
    {
        eax = eax + 4u;
        goto L_102dcb58;
    }
L_102dcb4e: ;
    eax = 0x80004005u;
    edx = in_edx;
L_102dce5e: ;
    g->edx = edx;
    return eax;
L_102dcb58: ;
    wr32(sp0 + 8u, rd32(sp0 + 8u) - 0x7cu);
    t1 = rd32(eax + 0xcu);
    wr32(self + 0xcu, t1);
    t2 = rd32(eax + 8u);
    wr32(self + 0x10u, t2);
    if ((rd8(eax + 6u) & 0x80u) == 0u)
    {
        esi = eax;
        loc_8 = eax + 0x7cu;
        eax = 1u;
    }
    else
    {
        esi = eax;
        loc_8 = eax + 0x7cu;
        eax = rd32(esi + 0x14u);
    }
    wr32(self + 0x14u, eax);
    if (eax == 0u)
    {
        wr32(self + 0x14u, 1u);
    }
    if ((rd32(esi + 0x6cu) & 0xfc00u) != 0xfc00u)
    {
        eax = rd32(esi + 0x6cu) & 0xfc00u;
        goto L_102dcba2;
    }
    loc_18 = 6u;
L_102dcbad: ;
    t3 = rd32(esi + 0x18u);
    if (rd32(esi + 0x18u) != 0u)
    {
        loc_24 = t3;
    }
    else
    {
        loc_24 = 1u;
    }
    if (rd32(COW_IMG(0x103cc680u)) == 0u)
    {
        ecx = 0xfc00u;
        edx = 1u;
        edi = COW_IMG(0x103cc680u);
        loc_2c = rd32(sp0 - 0x2cu);
        goto L_102dcc6c;
    }
    ecx = 0xfc00u;
    edx = 1u;
    edi = COW_IMG(0x103cc680u);
    loc_2c = rd32(sp0 - 0x2cu);
L_102dcbcc: ;
    if (rd32(esi + 0x48u) != 0x20u) goto L_102dcc5b;
    if (rd32(esi + 0x4cu) != rd32(edi + 8u)) goto L_102dcc5b;
    eax = rd32(edi + 8u);
    wr32(sp0 + 4u, eax & 0xc4440u);
    if ((eax & 4u) == 0u)
    {
        ecx = eax & 0xc4462u;
        edx = eax & 0xe4040u;
        ebx = eax & 0x80003u;
        loc_2c = eax & 0xc4040u;
        goto L_102dcc18;
    }
    ecx = eax & 0xc4462u;
    edx = eax & 0xe4040u;
    ebx = eax & 0x80003u;
    loc_2c = eax & 0xc4040u;
    if (rd32(esi + 0x50u) != rd32(edi + 0xcu)) goto L_102dcc58;
L_102dcc18: ;
    if (ecx == 0u) goto L_102dcc24;
    if (rd32(esi + 0x54u) != rd32(edi + 0x10u)) goto L_102dcc58;
L_102dcc24: ;
    if (edx == 0u) goto L_102dcc30;
    if (rd32(esi + 0x58u) != rd32(edi + 0x14u)) goto L_102dcc58;
L_102dcc30: ;
    if (rd32(sp0 + 4u) == 0u) goto L_102dcc3e;
    if (rd32(esi + 0x5cu) != rd32(edi + 0x18u)) goto L_102dcc58;
L_102dcc3e: ;
    if (loc_2c == 0u) goto L_102dcc4c;
    if (rd32(esi + 0x60u) != rd32(edi + 0x1cu)) goto L_102dcc58;
L_102dcc4c: ;
    if (ebx == 0u) goto L_102dcc69;
    if (rd32(esi + 0x64u) == rd32(edi + 0x20u)) goto L_102dcc69;
L_102dcc58: ;
L_102dcc5b: ;
    if (rd32(edi + 0x24u) != 0u)
    {
        edi = edi + 0x24u;
        goto L_102dcbcc;
    }
    edi = edi + 0x24u;
L_102dcc6c: ;
    if (rd32(edi) == 0u) goto L_102dce58;
    loc_28 = rd32(edi);
    edi = rd32(edi);
    g->edx = edx;
    g->esp = sp0 - 0x3cu;
    t4 = cow_cdecl(g, COW_IMG(0x102d2626u), 1, edi);
    t5 = g->edx;
    if ((rd8(esi + 6u) & 0x80u) == 0u)
    {
        eax = t4;
        edx = t5;
        loc_30 = t4;
        t6 = (loc_18 == 6u) * 2u + 3u;
        wr32(self + 0x44u, t6);
    }
    else
    {
        eax = t4;
        edx = t5;
        loc_30 = t4;
        wr32(self + 0x44u, 4u);
    }
    if (rd32(eax + 4u) != 1u) goto L_102dccc4;
    if (rd32(sp0 + 8u) < 0x400u) goto L_102dce58;
    wr32(sp0 + 8u, rd32(sp0 + 8u) - 0x400u);
    loc_2c = loc_8;
    loc_8 = loc_8 + 0x400u;
L_102dccc8: ;
    if (loc_18 == 0u) goto L_102dce4d;
    esi = rd32(sp0 + 8u);
    loc_14 = 0u;
    loc_10 = rd32(sp0 - 0x10u);
    loc_1c = rd32(sp0 - 0x1cu);
L_102dccde: ;
    t7 = rd32(self + 0x10u);
    t8 = rd32(self + 0x14u);
    t9 = rd32(self + 0xcu);
    wr32(sp0 + 4u, t8);
    if (loc_14 == 0u)
    {
        eax = self;
        ecx = t8;
        ebx = t7;
        edi = t9;
        loc_20 = t7;
        goto L_102dcd1b;
    }
    ecx = t8;
    ebx = t7;
    edi = t9;
    loc_20 = t7;
    g->esp = sp0 - 0x34u;
    t10 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x54u, in_esi, in_edi);
    t11 = g->edx;
    if (t10 == 0u)
    {
        edx = t11;
        eax = 0u;
    }
    else
    {
        eax = t10;
        edx = t11;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x3cu;
        t12 = cow_thiscall(g, COW_IMG(0x102daff3u), eax, 0);
        t13 = g->edx;
        eax = t12;
        edx = t13;
    }
    if (eax == 0u) goto L_102dce51;
    wr32(loc_1c + 0x50u, eax);
    ecx = loc_1c;
L_102dcd1b: ;
    if (loc_24 == 0u)
    {
        loc_10 = 0u;
        loc_1c = eax;
        goto L_102dce3e;
    }
    loc_10 = 0u;
    loc_1c = eax;
L_102dcd2c: ;
    if (loc_10 != 0u) goto L_102dcd37;
    esi = loc_1c;
L_102dcd5b: ;
    if (loc_28 == 0x31545844u) goto L_102dcdb7;
    eax = loc_28;
    if (eax == 0x32545844u) goto L_102dcdac;
    if (eax == 0x32595559u) goto L_102dcd9d;
    if (eax == 0x33545844u) goto L_102dcdac;
    if (eax == 0x34545844u) goto L_102dcdac;
    if (eax == 0x35545844u) goto L_102dcdac;
    if (eax == 0x59565955u) goto L_102dcd9d;
    eax = (rd32(loc_30 + 8u) >> 3u) * edi;
L_102dcda5: ;
    ecx = eax * ebx;
L_102dcdc9: ;
    wr32(esi + 0x38u, 0u);
    wr32(esi + 0x3cu, 0u);
    t18 = rd32(sp0 + 4u);
    t19 = rd32(sp0 + 8u);
    wr32(esi, loc_28);
    wr32(esi + 0x30u, eax);
    t20 = rd32(sp0 + 4u);
    wr32(esi + 4u, loc_8);
    wr32(esi + 0x14u, t20);
    wr32(esi + 0x34u, ecx);
    wr32(esi + 0xcu, edi);
    wr32(esi + 0x10u, loc_20);
    wr32(esi + 8u, loc_2c);
    if (t19 < ecx * t18)
    {
        edx = ecx * t18;
        goto L_102dce58;
    }
    edx = ecx * t18;
    ebx = loc_20;
    wr32(sp0 + 8u, rd32(sp0 + 8u) - edx);
    if (edi != 1u)
    {
        loc_8 = edx + loc_8;
        edi = edi >> 1u;
    }
    else
    {
        loc_8 = edx + loc_8;
        edi = 1u;
    }
    if (ebx != 1u)
    {
        ebx = ebx >> 1u;
    }
    else
    {
        ebx = 1u;
    }
    if (rd32(sp0 + 4u) != 1u)
    {
        loc_20 = ebx;
        wr32(sp0 + 4u, rd32(sp0 + 4u) >> 1u);
    }
    else
    {
        loc_20 = ebx;
        wr32(sp0 + 4u, 1u);
    }
    if (loc_10 + 1u < loc_24)
    {
        loc_10 = loc_10 + 1u;
        goto L_102dcd2c;
    }
    loc_10 = loc_10 + 1u;
L_102dce3e: ;
    if (loc_14 + 1u < loc_18)
    {
        loc_14 = loc_14 + 1u;
        goto L_102dccdb;
    }
L_102dce4d: ;
    eax = 0u;
L_102dce5d: ;
    goto L_102dce5e;
L_102dcba2: ;
    if (eax != 0u)
    {
        edx = 1u;
        goto L_102dce58;
    }
    loc_18 = 1u;
    goto L_102dcbad;
L_102dcc69: ;
    goto L_102dcc6c;
L_102dccc4: ;
    loc_2c = 0u;
    goto L_102dccc8;
L_102dccdb: ;
    goto L_102dccde;
L_102dcd37: ;
    g->esp = sp0 - 0x34u;
    t14 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x54u, in_esi, in_edi);
    t15 = g->edx;
    if (t14 == 0u)
    {
        edx = t15;
        eax = 0u;
    }
    else
    {
        eax = t14;
        edx = t15;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x3cu;
        t16 = cow_thiscall(g, COW_IMG(0x102daff3u), eax, 0);
        t17 = g->edx;
        eax = t16;
        edx = t17;
    }
    if (eax == 0u) goto L_102dce51;
    wr32(esi + 0x4cu, eax);
    esi = eax;
    goto L_102dcd5b;
L_102dcd9d: ;
    eax = (edi + 1u) >> 1u << 2u;
    goto L_102dcda5;
L_102dcdac: ;
    eax = (edi + 3u) >> 2u << 4u;
L_102dcdc0: ;
    ecx = ((ebx + 3u) >> 2u) * eax;
    goto L_102dcdc9;
L_102dcdb7: ;
    eax = (edi + 3u) >> 2u << 3u;
    goto L_102dcdc0;
L_102dce51: ;
    eax = 0x8007000eu;
    goto L_102dce5d;
L_102dce58: ;
    eax = 0x80004005u;
    goto L_102dce5d;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102dcb23(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102dcb23(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
