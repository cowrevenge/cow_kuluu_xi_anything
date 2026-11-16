/* f_0x101d7e50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101d7e50(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;

    if (rd32(COW_IMG(0x104dfd98u)) == 0u) goto L_101d80fc;
    if (rd32(self + 0x8bcu) != 0u)
    {
        eax = rd32(self + 0x8bcu);
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 0x8bcu);
        g->eax = eax;
        g->edx = in_edx;
        g->esp = sp0 - 0x14u;
        t1 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x2a0u, in_edi, in_esi);
        t2 = g->edx;
        if (t1 == 0u)
        {
            edx = t2;
            eax = 0u;
        }
        else
        {
            eax = t1;
            edx = t2;
            ebp = t1;
            esi = ebp;
            edi = 8u;
L_101d7e8a: ;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x1cu;
            t3 = cow_thiscall(g, COW_IMG(0x101f4af0u), esi, 0);
            t4 = g->edx;
            if (edi != 1u)
            {
                eax = t3;
                edx = t4;
                esi = esi + 0x54u;
                edi = edi - 1u;
                goto L_101d7e8a;
            }
            edx = t4;
            eax = ebp;
        }
        wr32(self + 0x8bcu, eax);
    }
    if (rd32(self + 8u) == 0u)
    {
        loc_8 = 0u;
    }
    else
    {
        ecx = rd32(self + 8u);
        g->eax = eax;
        g->esp = sp0 - 0x1cu;
        t5 = cow_thiscall(g, COW_IMG(0x10118220u), ecx, 0);
        loc_8 = t5;
    }
    wr16(self + 0x89cu, 0u);
    edx = 0u;
    esi = 0u;
    loc_c = 0u;
    loc_4 = 0u;
L_101d7eca: ;
    if (rd8(edx + rd32(COW_IMG(0x104dfd98u)) + 0x2cc8cu) == 0u)
    {
        eax = (rd32(self + 0x8bcu) & 0xffffff00u) | rd8(edx + rd32(COW_IMG(0x104dfd98u)) + 0x2cc8cu);
        ecx = (uint32_t)(int16_t)rd16(self + 0x89cu) * 0x15u;
        goto L_101d809a;
    }
    eax = (rd32(self + 0x8bcu) & 0xffffff00u) | rd8(edx + rd32(COW_IMG(0x104dfd98u)) + 0x2cc8cu);
    ecx = (uint32_t)(int16_t)rd16(self + 0x89cu) * 0x15u;
    ebp = edx + rd32(COW_IMG(0x104dfd98u)) + 0x2cc8cu;
    edi = rd32(self + 0x8bcu) + (uint32_t)(int16_t)rd16(self + 0x89cu) * 0x54u;
    if ((uint8_t)eax == 6u) goto L_101d809a;
    if ((uint8_t)eax == 7u) goto L_101d809a;
    if (rd8(esi + self + 0x8c0u) != 0u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(esi + self + 0x8c0u);
    }
    else
    {
        ecx = (ecx & 0xffffff00u) | rd8(esi + self + 0x8c0u);
        if ((uint8_t)eax == 3u) goto L_101d7f24;
        if ((uint8_t)eax <= 0xbu) goto L_101d7f3d;
        if ((uint8_t)eax > 0xfu) goto L_101d7f3d;
L_101d7f24: ;
        g->eax = eax;
        g->ecx = ecx;
        g->esp = sp0 - 0x14u;
        t6 = cow_cdecl(g, COW_IMG(0x100dfba0u), 3, esi, in_edi, in_esi);
        t7 = g->ecx;
        if ((uint8_t)t6 == 0u)
        {
            ecx = t7;
        }
        else
        {
            wr8(self + loc_c + 0x8c0u, 1u);
            ecx = loc_c;
        }
    }
L_101d7f3d: ;
    if (rd8(ebp) - 3u > 0x13u) goto L_101d8014;
    eax = rd8(ebp) - 3u;
    t8 = rd32(COW_IMG(0x101d8104u) + rd8(COW_IMG(0x101d8124u) + eax) * 4u);
    switch (t8 - RD)
    {
    case 0x101d7f5du: edx = rd8(COW_IMG(0x101d8124u) + eax); goto L_101d7f5d;
    case 0x101d7fa2u: edx = rd8(COW_IMG(0x101d8124u) + eax); goto L_101d7fa2;
    case 0x101d7fb5u: edx = rd8(COW_IMG(0x101d8124u) + eax); goto L_101d7fb5;
    case 0x101d7fc8u: edx = rd8(COW_IMG(0x101d8124u) + eax); goto L_101d7fc8;
    case 0x101d7fdbu: edx = rd8(COW_IMG(0x101d8124u) + eax); goto L_101d7fdb;
    case 0x101d7feeu: edx = rd8(COW_IMG(0x101d8124u) + eax); goto L_101d7fee;
    case 0x101d8001u: edx = rd8(COW_IMG(0x101d8124u) + eax); goto L_101d8001;
    case 0x101d8014u: goto L_101d8014;
    default: rt_fatal(g, COW_IMG(0x101d7f56u), "switch");
    }
    return;
L_101d7f5d: ;
    t15 = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x3c350u);
    g->eax = rd32(COW_IMG(0x104dfd98u));
    t16 = rd32(COW_IMG(0x104dfd98u));
    g->esp = sp0 - 0x1cu;
    t17 = cow_cdecl(g, COW_IMG(0x101d7280u), 1, t15);
    esi = (-(rd32(ebp + 0x1cu) != t17) & 0xffefaff0u) - 0x7faf6fb0u;
L_101d7f86: ;
    if (loc_8 == 0u)
    {
        eax = 0u;
    }
    else
    {
        ecx = loc_8;
        if (rd32(ecx + 0x3cu) != 0u)
        {
            eax = rd32(ecx + 0x3cu);
        }
        else
        {
            eax = rd32(ecx + 0x28u);
        }
    }
L_101d8020: ;
    wr32(edi + 0x4cu, eax);
    t18 = rd16(ebp + 0x14u);
    g->esp = sp0 - 0x1cu;
    cow_fastcall(g, COW_IMG(0x101f4b20u), edi, t18, 4, 0u, 0x15u, t18, 0x80808080u);
    t19 = g->edx;
    t20 = rd32(ebp + 0x18u) + 1u;
    g->eax = t20;
    t21 = cow_fastcall(g, COW_IMG(0x101f4b20u), edi, t19, 4, 3u, 0xau, t20, 0x80808080u);
    t22 = g->edx;
    t23 = rd16(ebp + 0x14u);
    t24 = cow_fastcall(g, COW_IMG(0x101f4b20u), edi, t22, 4, 1u, 0x19u, t23, esi);
    t25 = g->edx;
    if (rd8(ebp + 0x16u) == 1u)
    {
        eax = (t24 & 0xffffff00u) | rd8(ebp + 0x16u);
        ecx = edi;
        edx = t25;
        loc_24 = 0u;
        loc_28 = 0u;
    }
    else
    {
        eax = (t24 & 0xffffff00u) | rd8(ebp + 0x16u);
        ecx = edi;
        t26 = rd16(ebp + 0x14u);
        edx = t26;
        loc_24 = t26;
        loc_28 = 0x1bu;
    }
    g->esp = sp0 - 0x1cu;
    cow_fastcall(g, COW_IMG(0x101f4b20u), ecx, edx, 4, 2u, loc_28, loc_24, 0x80808080u);
    t27 = g->ecx;
    wr32(edi + 0x48u, loc_c);
    wr16(self + 0x89cu, (uint16_t)(rd16(self + 0x89cu) + 1u));
    eax = loc_c;
    ecx = t27;
    edx = loc_4;
    esi = loc_c;
L_101d809a: ;
    if ((int32_t)(edx + 0x28u) < 320)
    {
        loc_c = esi + 1u;
        esi = esi + 1u;
        loc_4 = edx + 0x28u;
        edx = edx + 0x28u;
        goto L_101d7eca;
    }
    esi = esi + 1u;
    t28 = (ecx & 0xffff0000u) | rd16(self + 0x89cu);
    t29 = rd32(self + 0x8bcu);
    g->esi = esi;
    g->eax = eax;
    g->edx = t29;
    g->esp = sp0 - 0x1cu;
    t30 = cow_thiscall(g, COW_IMG(0x101f7020u), self, 3, t29, t28, 1u);
    t31 = g->ecx;
    t32 = g->edx;
    if (rd16(self + 0x89cu) == 0u)
    {
        eax = t30;
        ecx = t31;
        edx = t32;
        g->eax = eax;
        g->esp = sp0 - 0x10u;
        t33 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 7u, 0x6au);
        wr32(self + 0x3cu, t33);
        wr8(self + 0x44u, 0x20u);
        wr8(self + 0x45u, 0x18u);
    }
    wr8(self + 0x89au, 1u);
    wr8(self + 0x899u, 0u);
L_101d80fc: ;
    g->esi = in_esi;
    return;
L_101d7fa2: ;
    g->eax = eax;
    g->esp = sp0 - 0x1cu;
    t14 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x3eu);
    eax = t14;
    esi = 0x80909040u;
    goto L_101d8020;
L_101d7fb5: ;
    g->eax = eax;
    g->esp = sp0 - 0x1cu;
    t13 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x3cu);
    eax = t13;
    esi = 0x80404040u;
    goto L_101d8020;
L_101d7fc8: ;
    g->eax = eax;
    g->esp = sp0 - 0x1cu;
    t12 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x40u);
    eax = t12;
    esi = 0x80909040u;
    goto L_101d8020;
L_101d7fdb: ;
    g->eax = eax;
    g->esp = sp0 - 0x1cu;
    t11 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x3fu);
    eax = t11;
    esi = 0x80804020u;
    goto L_101d8020;
L_101d7fee: ;
    g->eax = eax;
    g->esp = sp0 - 0x1cu;
    t10 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x3du);
    eax = t10;
    esi = 0x80404040u;
    goto L_101d8020;
L_101d8001: ;
    g->eax = eax;
    g->esp = sp0 - 0x1cu;
    t9 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x41u);
    eax = t9;
    esi = 0x80804020u;
    goto L_101d8020;
L_101d8014: ;
    esi = 0x80404040u;
    goto L_101d7f86;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d7e50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101d7e50(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
