/* f_0x102ba7c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=10 */
void cow_fn_102ba7c0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg8 = rd32(g->esp + 0x20u);
    const uint32_t arg9 = rd32(g->esp + 0x24u);
    const uint32_t arg10 = rd32(g->esp + 0x28u);

    t1 = rd32(sp0 + 8u);
    t2 = t1 - rd32(sp0 + 0x14u);
    t3 = rd32(sp0 + 0xcu);
    t4 = t3 - rd32(sp0 + 0x18u);
    t5 = rd32(sp0 + 0x14u);
    t6 = rd32(sp0 + 0x18u);
    t7 = rd32(sp0 + 0x1cu);
    wr32(sp0 + 8u, t4);
    t8 = rd32(sp0 + 0x10u);
    wr32(sp0 + 0x1cu, t1 + t5);
    wr32(sp0 + 0x14u, t8 - t7);
    wr32(sp0 + 0x10u, t3 + t6);
    wr32(sp0 + 0x18u, t7 + t8);
    if ((int32_t)t2 >= 0)
    {
        eax = t8;
        ecx = t1 + t5;
        edx = t3 + t6;
        ebx = t3;
        ebp = t8 - t7;
        esi = t7 + t8;
        edi = t1;
        loc_10 = t2;
    }
    else
    {
        eax = t8;
        ecx = t1 + t5;
        edx = t3 + t6;
        ebx = t3;
        ebp = t8 - t7;
        esi = t7 + t8;
        edi = t1;
        loc_10 = 0u;
    }
    if ((int32_t)rd32(sp0 + 8u) < 0)
    {
        wr32(sp0 + 8u, 0u);
    }
    if ((int32_t)ebp < 0)
    {
        wr32(sp0 + 0x14u, 0u);
        ebp = rd32(sp0 + 0x14u);
    }
    if ((int32_t)ecx > 14)
    {
        wr32(sp0 + 0x1cu, 0xeu);
    }
    if ((int32_t)edx > 14)
    {
        wr32(sp0 + 0x10u, 0xeu);
    }
    if ((int32_t)esi > 14)
    {
        wr32(sp0 + 0x18u, 0xeu);
        esi = 0xeu;
    }
    t9 = eax * 0x384u + ebx * 0x3cu + edi * 4u;
    ebx = rd32(sp0 + 4u);
    loc_4 = t9;
L_102ba872: ;
    t10 = rd32(loc_4 + rd32(ebx));
    t11 = rd32(ebx);
    g->esp = sp0 - 0x20u;
    t12 = cow_cdecl(g, COW_IMG(0x102ba9b0u), 1, t10);
    if (t12 == 0u) goto L_102ba9a3;
    edi = t12;
    wr32(edi + 4u, rd32(arg9));
    if ((int32_t)loc_10 > (int32_t)rd32(sp0 + 0x1cu)) goto L_102ba99c;
    edx = loc_10;
    loc_8 = loc_10;
L_102ba8ab: ;
    t13 = rd32(sp0 + 8u);
    if ((int32_t)t13 > (int32_t)rd32(sp0 + 0x10u)) goto L_102ba987;
    ecx = t13;
    loc_c = t13;
L_102ba8bf: ;
    if ((int32_t)ebp <= (int32_t)esi)
    {
        t14 = ebp * 0x384u + ecx * 0x3cu + edx * 4u;
        t15 = rd32(sp0 + 0x14u);
        wr32(sp0 + 0xcu, t14);
        t16 = esi - t15 + 1u;
        wr32(sp0 + 4u, t16);
        ebp = t16;
L_102ba8ec: ;
        t17 = rd32(rd32(ebx) + rd32(sp0 + 0xcu));
        t18 = rd32(ebx);
        g->esp = sp0 - 0x20u;
        t19 = cow_cdecl(g, COW_IMG(0x102ba9b0u), 1, t17);
        if (t19 == 0u) goto L_102ba951;
        esi = t19;
L_102ba904: ;
        if (rd32(esi + 4u) == 0u)
        {
            t20 = rd32(esi) * 0xcu + rd32(ebx + 0xcu);
            t21 = rd32(edi) * 0xcu + rd32(ebx + 0xcu);
            g->esp = sp0 - 0x18u;
            t22 = cow_call_regs(g, COW_IMG(0x102b43d0u), t21, rd32(edi), g->edx, 1, 5, t21, t20, arg8, in_edi, in_esi);
            if ((uint8_t)t22 != 0u)
            {
                wr32(esi + 4u, -rd32(arg9));
                wr32(esi, rd32(edi));
                wr32(arg10, rd32(arg10) + 1u);
            }
        }
        if (rd32(esi + 8u) != 0u)
        {
            esi = rd32(esi + 8u);
            goto L_102ba904;
        }
        ebp = rd32(sp0 + 4u);
L_102ba951: ;
        t23 = rd32(sp0 + 0xcu) + 0x384u;
        wr32(sp0 + 0xcu, t23);
        wr32(sp0 + 4u, ebp - 1u);
        if (ebp != 1u)
        {
            ebp = ebp - 1u;
            goto L_102ba8ec;
        }
        ecx = loc_c;
        edx = loc_8;
        ebp = rd32(sp0 + 0x14u);
        esi = rd32(sp0 + 0x18u);
    }
    if ((int32_t)(ecx + 1u) <= (int32_t)rd32(sp0 + 0x10u))
    {
        loc_c = ecx + 1u;
        ecx = ecx + 1u;
        goto L_102ba8bf;
    }
L_102ba987: ;
    if ((int32_t)(edx + 1u) <= (int32_t)rd32(sp0 + 0x1cu))
    {
        loc_8 = edx + 1u;
        edx = edx + 1u;
        goto L_102ba8ab;
    }
L_102ba99c: ;
    wr32(arg9, rd32(arg9) + 1u);
    goto L_102ba872;
L_102ba9a3: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102ba7c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102ba7c0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
