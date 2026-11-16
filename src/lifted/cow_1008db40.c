/* f_0x1008db40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1008db40(Guest* g)
{
    double d34;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_4;
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

    if ((rd32(self + 0x120u) >> 8u & 2u) == 0u) goto L_1008e0c2;
    eax = rd32(self + 0x120u);
    if (rd16(self + 0x1d8u) >= 0x17u)
    {
        eax = (eax & 0xffff0000u) | rd16(self + 0x1d8u);
        goto L_1008db80;
    }
    eax = (eax & 0xffff0000u) | rd16(self + 0x1d8u);
    t1 = rd32(COW_IMG(0x104e1b98u) + (uint16_t)eax * 4u);
    wr32(rd32(self + 0xa0u) + 0x78u, t1);
    return;
L_1008db80: ;
    if (rd8(self + 0xeeu) == 3u) goto L_1008e0b3;
    eax = (eax & 0xffffff00u) | rd8(self + 0xeeu);
    if ((uint8_t)eax == 4u) goto L_1008e0b3;
    if ((uint8_t)eax == 5u) goto L_1008e0b3;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t2 = cow_thiscall(g, COW_IMG(0x10097a60u), self, 0);
    t3 = g->ecx;
    t4 = g->edx;
    if ((uint8_t)t2 == 0u)
    {
        eax = t2;
        ecx = t3;
        edx = t4;
        goto L_1008dbbf;
    }
    wr32(rd32(self + 0xa0u) + 0x78u, rd32(COW_IMG(0x104e1bbcu)));
    return;
L_1008dbbf: ;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t5 = cow_call_regs(g, COW_IMG(0x101cc4f0u), eax, g->ecx, g->edx, 1, 0);
    t6 = g->edx;
    g->edx = t6;
    t7 = cow_thiscall(g, COW_IMG(0x1008e140u), self, 0);
    t8 = g->ecx;
    t9 = g->edx;
    if ((uint8_t)t7 == 0u)
    {
        ecx = t8;
        edx = t9;
        edi = t5;
        loc_4 = t5;
        loc_8 = rd32(sp0 - 8u);
        goto L_1008dbe6;
    }
    eax = t7;
    edx = t9;
    edi = t5;
    loc_4 = t5;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t10 = cow_call_regs(g, COW_IMG(0x1008e8d0u), eax, self, g->edx, 0, 1, edi);
    t11 = g->ecx;
    t12 = g->edx;
    if ((uint8_t)t10 != 0u)
    {
        ecx = t11;
        edx = t12;
        loc_8 = (rd32(sp0 - 8u) & 0xff00ffffu) | 0x10000u;
        goto L_1008dbeb;
    }
    ecx = t11;
    edx = t12;
    loc_8 = (rd32(sp0 - 8u) & 0xff00ffffu) | 0x10000u;
L_1008dbe6: ;
    loc_8 = loc_8 & 0xff00ffffu;
L_1008dbeb: ;
    if (rd8(self + 0x1ffu) < 2u) goto L_1008dcf9;
    ecx = (ecx & 0xffffff00u) | rd8(self + 0x1ffu);
    if ((uint8_t)ecx > 0x63u) goto L_1008dcf9;
    if ((uint8_t)ecx < 0x28u) goto L_1008dc11;
    if ((uint8_t)ecx <= 0x2bu) goto L_1008dcf9;
L_1008dc11: ;
    if (rd8(self + 0x294u) == 0u) goto L_1008dc4a;
    edx = rd8(self + 0x294u);
    if (edx - 1u > 6u)
    {
        eax = edx - 1u;
        goto L_1008dcb6;
    }
    eax = edx - 1u;
    t13 = rd32(COW_IMG(0x1008e0ccu) + eax * 4u);
    switch (t13 - RD)
    {
    case 0x1008dc35u: goto L_1008dc35;
    case 0x1008dc3cu: goto L_1008dc3c;
    case 0x1008dc43u: goto L_1008dc43;
    case 0x1008dc93u: goto L_1008dc93;
    case 0x1008dc9au: goto L_1008dc9a;
    default: rt_fatal(g, COW_IMG(0x1008dc2eu), "switch");
    }
    return;
L_1008dc35: ;
    eax = 0x14u;
L_1008dca6: ;
    t16 = rd32(COW_IMG(0x104e1b98u) + eax * 4u);
    t17 = rd32(self + 0xa0u);
    wr32(t17 + 0x78u, t16);
    eax = t16;
    edx = t17;
L_1008dcb6: ;
    if ((uint8_t)(loc_8 >> 0x10u) != 0u) goto L_1008dcf9;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t18 = cow_thiscall(g, COW_IMG(0x1008e140u), self, 0);
    t19 = g->edx;
    if ((uint8_t)t18 == 0u)
    {
        edx = t19;
        goto L_1008dcf9;
    }
    if (rd32(edi + 0x78u) == rd32(self + 0x78u)) goto L_1008e0c2;
    if ((rd8(self + 0x1d0u) & 4u) == 0u) goto L_1008e0c2;
    wr32(rd32(self + 0xa0u) + 0x78u, rd32(COW_IMG(0x104e1b9cu)));
    return;
L_1008dc3c: ;
    eax = 0x15u;
    goto L_1008dca6;
L_1008dc43: ;
    eax = 0x16u;
    goto L_1008dca6;
L_1008dc4a: ;
    if ((uint8_t)ecx - 2u > 7u)
    {
        eax = 9u;
        edx = (uint8_t)ecx - 2u;
        ecx = (uint8_t)ecx;
        goto L_1008dc84;
    }
    edx = (uint8_t)ecx - 2u;
    ecx = (uint8_t)ecx;
    t14 = rd32(COW_IMG(0x1008e0e8u) + edx * 4u);
    switch (t14 - RD)
    {
    case 0x1008dc5fu: goto L_1008dc5f;
    case 0x1008dc66u: goto L_1008dc66;
    case 0x1008dc6du: goto L_1008dc6d;
    case 0x1008dc74u: goto L_1008dc74;
    case 0x1008dc7bu: goto L_1008dc7b;
    case 0x1008dc82u: goto L_1008dc82;
    case 0x1008dc84u: eax = 9u; goto L_1008dc84;
    default: rt_fatal(g, COW_IMG(0x1008dc58u), "switch");
    }
    return;
L_1008dc5f: ;
    eax = 0x12u;
L_1008dc84: ;
    if (ecx - 0x20u > 7u) goto L_1008dca1;
    ecx = ecx - 0x20u;
    t15 = rd32(COW_IMG(0x1008e108u) + ecx * 4u);
    switch (t15 - RD)
    {
    case 0x1008dc93u: goto L_1008dc93;
    case 0x1008dc9au: goto L_1008dc9a;
    default: rt_fatal(g, COW_IMG(0x1008dc8cu), "switch");
    }
    return;
L_1008dc66: ;
    eax = 0x13u;
    goto L_1008dc84;
L_1008dc6d: ;
    eax = 0x14u;
    goto L_1008dc84;
L_1008dc74: ;
    eax = 0x15u;
    goto L_1008dc84;
L_1008dc7b: ;
    eax = 0x16u;
    goto L_1008dc84;
L_1008dc82: ;
    eax = 0u;
    goto L_1008dc84;
L_1008dc93: ;
    eax = 0x12u;
    goto L_1008dca6;
L_1008dc9a: ;
    eax = 0x13u;
    goto L_1008dca6;
L_1008dca1: ;
    if (eax == 9u) goto L_1008dcb6;
    goto L_1008dca6;
L_1008dcf9: ;
    if ((rd32(self + 0x128u) >> 0xbu & 7u) == 0u)
    {
        eax = rd32(self + 0x128u) >> 0xbu & 7u;
        goto L_1008dd2f;
    }
    eax = rd32(self + 0x128u) >> 0xbu & 7u;
    if (eax == 1u) goto L_1008dd2f;
    if (eax == 2u) goto L_1008dd2f;
    t20 = rd32(COW_IMG(0x104e1b98u) + rd32(COW_IMG(0x1035b5fcu) + eax * 4u) * 4u);
    wr32(rd32(self + 0xa0u) + 0x78u, t20);
    return;
L_1008dd2f: ;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t21 = cow_call_regs(g, COW_IMG(0x1008e920u), eax, self, g->edx, 0, 1, edi);
    t22 = g->edx;
    if (rd8(self + 0x1ffu) < 0x28u)
    {
        edx = t22;
        ebx = (in_ebx & 0xffffff00u) | (uint8_t)t21;
        goto L_1008dd4c;
    }
    eax = (t21 & 0xffffff00u) | rd8(self + 0x1ffu);
    edx = t22;
    ebx = (in_ebx & 0xffffff00u) | (uint8_t)t21;
    if ((uint8_t)eax <= 0x2bu)
    {
        loc_8 = (loc_8 & 0xffffffu) | 0x1000000u;
        goto L_1008dd51;
    }
    loc_8 = (loc_8 & 0xffffffu) | 0x1000000u;
L_1008dd4c: ;
    loc_8 = loc_8 & 0xffffffu;
L_1008dd51: ;
    g->esi = self;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t23 = cow_thiscall(g, COW_IMG(0x1008e180u), self, 0);
    t24 = g->ecx;
    t25 = g->edx;
    if ((rd32(self + 0x120u) >> 8u & 0x20u) != 0u)
    {
        ecx = t24;
        edx = t25;
        edi = t23;
        goto L_1008dd7b;
    }
    eax = rd32(self + 0x120u);
    ecx = t24;
    edx = t25;
    edi = t23;
    if (rd8(self + 0x1ffu) < 8u) goto L_1008deda;
    eax = (eax & 0xffffff00u) | rd8(self + 0x1ffu);
    if ((uint8_t)eax > 9u) goto L_1008deda;
L_1008dd7b: ;
    if (rd32(self + 0x188u) == 0u)
    {
        eax = rd32(self + 0x188u);
        goto L_1008dd8d;
    }
    eax = rd32(self + 0x188u);
    if (loc_8 >> 0x18u == 0u)
    {
        eax = (eax & 0xffffff00u) | loc_8 >> 0x18u;
        goto L_1008dd95;
    }
    eax = (eax & 0xffffff00u) | loc_8 >> 0x18u;
L_1008dd8d: ;
    if ((uint8_t)ebx == 0u) goto L_1008deda;
L_1008dd95: ;
    if (edi == 0u) goto L_1008dddc;
    g->esp = sp0 - 0x14u;
    t26 = cow_call_regs(g, COW_IMG(0x1008e8d0u), eax, edi, g->edx, 0, 1, loc_4);
    if ((uint8_t)t26 == 0u) goto L_1008ddc6;
    if (rd32(edi + 0xa0u) == 0u) goto L_1008ddc6;
    eax = rd32(edi + 0xa0u);
    t27 = rd32(eax + 0x78u);
    wr32(rd32(self + 0xa0u) + 0x78u, t27);
    g->esi = in_esi;
    return;
L_1008ddc6: ;
    wr32(rd32(self + 0xa0u) + 0x78u, rd32(COW_IMG(0x104e1b9cu)));
    g->esi = in_esi;
    return;
L_1008dddc: ;
    g->esp = sp0 - 0x14u;
    t28 = cow_thiscall_cdecl(g, COW_IMG(0x100e8b80u), ecx, 1, 5u);
    if (t28 == 0u) goto L_1008de02;
    eax = t28;
    edi = t28;
L_1008ddec: ;
    if (rd32(eax + 0x14u) == rd32(self + 0x188u)) goto L_1008de3f;
    ecx = rd32(eax + 0x14u);
    edx = rd32(self + 0x188u);
    g->esp = sp0 - 0x14u;
    t29 = cow_stdcall(g, COW_IMG(0x100e8c70u), 0);
    if (t29 != 0u)
    {
        eax = t29;
        goto L_1008ddec;
    }
L_1008de02: ;
    if ((uint8_t)ebx != 0u) goto L_1008dec4;
    if (rd32(loc_4 + 0x18cu) == 0u) goto L_1008de2a;
    eax = loc_4;
    if (!(rd32(eax + 0x130u) >> 0x19u & 1u)) goto L_1008dec4;
L_1008de2a: ;
    wr32(rd32(self + 0xa0u) + 0x78u, rd32(COW_IMG(0x104e1bb4u)));
    g->esi = in_esi;
    return;
L_1008de3f: ;
    if (((rd32(eax + 0x34u) ^ rd32(edi + 0x34u)) & 3u) == 0u)
    {
        ecx = rd32(COW_IMG(0x104e1bb0u));
    }
    else
    {
        ecx = rd32(COW_IMG(0x104e1bb0u));
        ecx = (ecx >> 1u) + (rd32(COW_IMG(0x104e1bb4u)) >> 1u);
    }
    t30 = rd32(self + 0xa0u);
    wr32(t30 + 0x78u, ecx);
    t31 = rd32(self + 0x12cu) | 0x10000000u;
    t32 = rd32(self + 0x130u);
    wr32(self + 0x12cu, t31);
    if (t32 >> 0x16u & 1u) goto L_1008e0c2;
    edx = t30;
    if (loc_4 == 0u) goto L_1008e0c2;
    eax = loc_4;
    g->eax = eax + 4u;
    g->esp = sp0 - 0x14u;
    t33 = cow_cdecl(g, COW_IMG(0x10027620u), 2, eax + 4u, self + 4u);
    d34 = cow_take_float(g);
    if (!(d34 < (double)rdf32(COW_IMG(0x1032d6bcu)))) goto L_1008e0c2;
    wr8(COW_IMG(0x10480aecu), 1u);
    g->esi = in_esi;
    return;
L_1008dec4: ;
    wr32(rd32(self + 0xa0u) + 0x78u, rd32(COW_IMG(0x104e1bb0u)));
    g->esi = in_esi;
    return;
L_1008deda: ;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t35 = cow_thiscall_cdecl(g, COW_IMG(0x100e8b80u), ecx, 1, 0u);
    t36 = g->edx;
    if (t35 == 0u)
    {
        edx = t36;
        goto L_1008df06;
    }
    eax = t35;
L_1008dee8: ;
    if (rd32(loc_4 + 0x78u) == rd32(self + 0x78u))
    {
        ecx = rd32(self + 0x78u);
        edx = loc_4;
        goto L_1008defd;
    }
    ecx = rd32(self + 0x78u);
    edx = loc_4;
    if (rd32(eax + 0x14u) == ecx) goto L_1008e038;
L_1008defd: ;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t37 = cow_stdcall(g, COW_IMG(0x100e8c70u), 0);
    t38 = g->edx;
    if (t37 != 0u)
    {
        eax = t37;
        goto L_1008dee8;
    }
    edx = t38;
L_1008df06: ;
    if (!(rd8(self + 0x127u) & 1u)) goto L_1008df24;
    wr32(rd32(self + 0xa0u) + 0x78u, rd32(COW_IMG(0x104e1bb8u)));
    g->esi = in_esi;
    return;
L_1008df24: ;
    if ((rd8(self + 0x140u) & 8u) == 0u) goto L_1008df43;
    wr32(rd32(self + 0xa0u) + 0x78u, rd32(COW_IMG(0x104e1ba0u)));
    g->esi = in_esi;
    return;
L_1008df43: ;
    if ((rd32(self + 0x124u) & 0x200000u) == 0u)
    {
        eax = rd32(self + 0x124u);
        goto L_1008df66;
    }
    wr32(rd32(self + 0xa0u) + 0x78u, rd32(COW_IMG(0x104e1ba0u)));
    g->esi = in_esi;
    return;
L_1008df66: ;
    if ((eax & 0x100000u) == 0u) goto L_1008df82;
    wr32(rd32(self + 0xa0u) + 0x78u, rd32(COW_IMG(0x104e1ba0u)));
    g->esi = in_esi;
    return;
L_1008df82: ;
    if ((eax & 0x800000u) == 0u) goto L_1008df9f;
    wr32(rd32(self + 0xa0u) + 0x78u, rd32(COW_IMG(0x104e1ba4u)));
    g->esi = in_esi;
    return;
L_1008df9f: ;
    if (edi != 0u) goto L_1008dfdf;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t39 = cow_thiscall(g, COW_IMG(0x1008e140u), self, 0);
    t40 = g->edx;
    if ((uint8_t)t39 != 0u)
    {
        eax = t39;
        goto L_1008dfc1;
    }
    edx = t40;
    g->esp = sp0 - 0x14u;
    t41 = cow_thiscall(g, COW_IMG(0x1008e150u), self, 0);
    if ((uint8_t)t41 != 0u)
    {
        eax = t41;
        goto L_1008dfc1;
    }
    eax = t41;
    if (loc_8 >> 0x18u == 0u) goto L_1008dfdf;
    eax = (eax & 0xffffff00u) | loc_8 >> 0x18u;
L_1008dfc1: ;
    if ((uint8_t)(loc_8 >> 0x10u) != 0u) goto L_1008dfdf;
    wr32(rd32(self + 0xa0u) + 0x78u, rd32(COW_IMG(0x104e1b98u)));
    g->esi = in_esi;
    return;
L_1008dfdf: ;
    if ((rd32(self + 0x12cu) >> 8u & 0x20u) == 0u) goto L_1008e075;
    eax = rd32(self + 0x12cu);
    if (eax >> 0x1eu & 1u)
    {
        edx = eax >> 0x1eu;
        goto L_1008e04e;
    }
    edx = eax >> 0x1eu;
    if (eax >> 0x1fu != 0u) goto L_1008e04e;
    g->esi = self;
    g->esp = sp0 - 0x14u;
    t42 = cow_thiscall(g, COW_IMG(0x1008e180u), self, 0);
    if (t42 == 0u) goto L_1008e038;
    eax = t42;
    edi = t42;
    g->esp = sp0 - 0x14u;
    t43 = cow_call_regs(g, COW_IMG(0x1008e8d0u), eax, edi, g->edx, 0, 1, loc_4);
    if ((uint8_t)t43 == 0u) goto L_1008e038;
    t44 = rd32(rd32(edi + 0xa0u) + 0x78u);
    wr32(rd32(self + 0xa0u) + 0x78u, t44);
    g->esi = in_esi;
    return;
L_1008e038: ;
    wr32(rd32(self + 0xa0u) + 0x78u, rd32(COW_IMG(0x104e1b9cu)));
    g->esi = in_esi;
    return;
L_1008e04e: ;
    if (!(eax >> 0x16u & 1u)) goto L_1008e0b3;
    g->esp = sp0 - 0x14u;
    t45 = cow_thiscall(g, COW_IMG(0x1008e240u), self, 0);
    if ((uint8_t)t45 == 0u) goto L_1008e0b3;
    wr32(rd32(self + 0xa0u) + 0x78u, rd32(COW_IMG(0x104e1b9cu)));
    g->esi = in_esi;
    return;
L_1008e075: ;
    if ((rd32(self + 0x120u) >> 8u & 0x20u) != 0u) goto L_1008e09e;
    eax = rd32(self + 0x120u);
    if ((uint8_t)(loc_8 >> 0x10u) != 0u) goto L_1008e09e;
    wr32(rd32(self + 0xa0u) + 0x78u, rd32(COW_IMG(0x104e1ba8u)));
    g->esi = in_esi;
    return;
L_1008e09e: ;
    wr32(rd32(self + 0xa0u) + 0x78u, rd32(COW_IMG(0x104e1bacu)));
    g->esi = in_esi;
    return;
L_1008e0b3: ;
    wr32(rd32(self + 0xa0u) + 0x78u, rd32(COW_IMG(0x104e1ba8u)));
L_1008e0c2: ;
    g->esi = in_esi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1008db40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1008db40(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
