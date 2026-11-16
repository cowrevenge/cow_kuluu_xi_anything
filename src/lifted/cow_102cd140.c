/* f_0x102cd140 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102cd140(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;

    t1 = rd32(sp0 + 8u);
    t2 = rd32(rd32(sp0 + 4u) + 0xb58u);
    t3 = rd32(rd32(sp0 + 4u) + 0x108u);
    t4 = rd32(sp0 + 4u);
    g->esp = sp0 - 0x28u;
    cow_cdecl(g, COW_IMG(0x102cd100u), 4, t3, 2u, t2, t1);
    if ((int32_t)rd32(t4 + 0x10cu) <= 0)
    {
        esi = t1 + 2u;
    }
    else
    {
        esi = t1 + 2u;
        edi = t4;
        loc_c = t3;
        ebx = edi + 0x110u;
        loc_14 = 0u;
        loc_10 = edi + 0x110u;
L_102cd18f: ;
        if ((int32_t)rd32(edi + 0x104u) <= 1)
        {
            eax = rd32(ebx);
            ecx = rd32(edi + 0x104u);
            goto L_102cd1ac;
        }
        eax = rd32(ebx);
        ecx = rd32(edi + 0x104u);
        edx = 1u;
L_102cd1a0: ;
        if ((int32_t)(edx + 1u) < (int32_t)ecx)
        {
            eax = eax * 2u + rd32(ebx + edx * 4u);
            edx = edx + 1u;
            goto L_102cd1a0;
        }
        eax = eax * 2u + rd32(ebx + edx * 4u);
L_102cd1ac: ;
        t5 = rd32(edi + 0xb58u);
        g->esp = sp0 - 0x30u;
        cow_cdecl(g, COW_IMG(0x102cd100u), 4, eax, ecx, t5, esi);
        t6 = esi + rd32(edi + 0x104u);
        t7 = rd32(edi + 0xb58u);
        t8 = rd32(ebx + 0x10u) + rd32(ebx + 0x14u) * 8u;
        g->esp = sp0 - 0x40u;
        cow_cdecl(g, COW_IMG(0x102cd100u), 4, t8, 6u, t7, t6);
        t9 = rd32(ebx + 0x14u);
        t10 = rd32(COW_IMG(0x103cc0c8u) + loc_c * 4u + rd32(ebx + 0x10u) * 8u);
        if ((int32_t)(rd32(edi + 0x104u) << 2u) <= 0)
        {
            esi = t6 + 6u;
        }
        else
        {
            ecx = rd32(edi + 0x104u) << 2u;
            esi = t6 + 6u;
            loc_4 = t9;
            loc_20 = t10;
            wr32(sp0 + 8u, ebx + 0x18u);
            eax = 0u;
            ebp = ebx + 0x18u;
            loc_18 = 0u;
L_102cd21c: ;
            if (rd32(ebx + (uint32_t)((int32_t)eax >> 2u) * 4u) != 0u)
            {
                t11 = rd32(edi + 0xb58u);
                g->ecx = ecx;
                g->esp = sp0 - 0x30u;
                cow_cdecl(g, COW_IMG(0x102cd100u), 4, rd32(ebp), 3u, t11, esi);
                t12 = g->ecx;
                if ((int32_t)rd32(ebp) <= 0)
                {
                    ecx = t12;
                    esi = esi + 3u;
                }
                else
                {
                    esi = esi + 3u;
                    wr32(sp0 + 4u, ebp + 4u);
                    loc_1c = 0u;
L_102cd25c: ;
                    t13 = rd32(edi + 0xb58u);
                    t14 = rd32(rd32(sp0 + 4u));
                    t15 = rd32(t14 + 0x14u);
                    g->eax = t15;
                    g->esp = sp0 - 0x30u;
                    t16 = cow_cdecl(g, COW_IMG(0x102cd100u), 4, t15, 6u, t13, esi);
                    t17 = rd32(edi + 0xb58u);
                    t18 = rd32(t14 + 0x10u) & 0x3fu;
                    g->esp = sp0 - 0x40u;
                    cow_cdecl(g, COW_IMG(0x102cd100u), 4, t18, 6u, t17, esi + 6u);
                    ebx = 0u;
                    ebp = t14;
                    esi = esi + 0xcu;
                    loc_8 = t14;
L_102cd2a0: ;
                    t19 = rd32(edi + 0xb58u);
                    t20 = rd32(loc_20 + rd32(ebp + ebx * 4u) * 8u);
                    t21 = rd32(ebp + ebx * 4u);
                    g->esp = sp0 - 0x30u;
                    cow_thiscall_cdecl(g, rd32(edi + 0x6774u), loc_20, 3, t20, esi, t19);
                    if ((int32_t)(ebx + 1u) <= (int32_t)loc_4)
                    {
                        ebx = ebx + 1u;
                        esi = esi + rd32(loc_20 + t21 * 8u + 4u);
                        goto L_102cd29c;
                    }
                    esi = esi + rd32(loc_20 + t21 * 8u + 4u);
                    t22 = rd32(sp0 + 4u) + 4u;
                    t23 = rd32(sp0 + 8u);
                    t24 = rd32(rd32(sp0 + 8u));
                    wr32(sp0 + 4u, t22);
                    if ((int32_t)(loc_1c + 1u) < (int32_t)t24)
                    {
                        loc_1c = loc_1c + 1u;
                        goto L_102cd25c;
                    }
                    ecx = t23;
                    ebx = loc_10;
                    ebp = ecx;
                }
            }
            t25 = rd32(edi + 0x104u);
            wr32(sp0 + 8u, ebp + 0x20u);
            if ((int32_t)(loc_18 + 1u) < (int32_t)(t25 << 2u))
            {
                eax = loc_18 + 1u;
                ebp = ebp + 0x20u;
                loc_18 = loc_18 + 1u;
                goto L_102cd21c;
            }
        }
        if ((int32_t)(loc_14 + 1u) < (int32_t)rd32(edi + 0x10cu))
        {
            loc_14 = loc_14 + 1u;
            loc_10 = ebx + 0x218u;
            ebx = ebx + 0x218u;
            goto L_102cd18f;
        }
    }
    return esi;
L_102cd29c: ;
    ebp = loc_8;
    goto L_102cd2a0;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102cd140(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102cd140(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
