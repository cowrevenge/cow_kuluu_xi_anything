/* f_0x1021c7e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_1021c7e0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        goto L_1021ca39;
    }
    wr32(self + 0x10u, arg1);
    wr32(self + 0xcu, arg2);
    if ((uint8_t)arg4 == 0u) goto L_1021c8fa;
    if ((int32_t)arg2 <= 0)
    {
        ecx = self;
        edx = self;
    }
    else
    {
        if ((int32_t)arg2 > 2)
        {
            ecx = self;
            edx = self;
        }
        else
        {
            if (rd8(arg2 + self + 0x18u) <= 1u)
            {
                ecx = self;
                edx = self;
                goto L_1021ca27;
            }
            ebp = 1u;
L_1021c832: ;
            if ((int32_t)(ebp + 1u) >= (int32_t)rd8(self + rd32(self + 0xcu) + 0x18u))
            {
                esi = ebp + 1u;
                goto L_1021c8e2;
            }
            eax = rd32(self + 0xcu);
            esi = ebp + 1u;
            edi = ebp + 1u;
L_1021c848: ;
            if (rd16(eax * 0x288u + ebp * 8u + self + 0x808u) == rd16(eax * 0x288u + edi * 8u + self + 0x808u))
            {
                eax = eax * 0x51u + edi;
                t1 = rd32(eax * 8u + self + 0x804u);
                t2 = rd32(eax * 8u + self + 0x808u);
                if ((int32_t)(edi - 1u) < (int32_t)esi)
                {
                    loc_8 = t1;
                    loc_4 = t2;
                    goto L_1021c8ae;
                }
                ecx = edi - 1u;
                loc_8 = t1;
                loc_4 = t2;
L_1021c882: ;
                t3 = rd32(ecx * 8u + self + rd32(self + 0xcu) * 0x288u + 0x804u);
                t4 = rd32(self + 0xcu);
                wr32(ecx * 8u + self + t4 * 0x288u + 0x80cu, t3);
                t5 = rd32(ecx * 8u + self + t4 * 0x288u + 0x808u);
                wr32(ecx * 8u + self + t4 * 0x288u + 0x810u, t5);
                if ((int32_t)(ecx - 1u) >= (int32_t)esi)
                {
                    ecx = ecx - 1u;
                    goto L_1021c882;
                }
L_1021c8ae: ;
                t6 = rd32(self + 0xcu);
                wr32(ebp * 8u + self + t6 * 0x288u + 0x80cu, loc_8);
                wr32(ebp * 8u + self + t6 * 0x288u + 0x810u, loc_4);
            }
            if ((int32_t)(edi + 1u) < (int32_t)rd8(self + rd32(self + 0xcu) + 0x18u))
            {
                eax = rd32(self + 0xcu);
                edi = edi + 1u;
                goto L_1021c848;
            }
L_1021c8e2: ;
            if ((int32_t)esi < (int32_t)rd8(self + rd32(self + 0xcu) + 0x18u))
            {
                ebp = esi;
                goto L_1021c832;
            }
            ecx = rd8(self + rd32(self + 0xcu) + 0x18u);
            edx = self;
        }
    }
L_1021ca27: ;
    if ((int32_t)arg3 >= 18)
    {
        eax = arg3;
    }
    else
    {
        g->esp = sp0 - 0x18u;
        t15 = cow_cdecl(g, COW_IMG(0x100ebf40u), 1, arg3);
        eax = t15;
    }
L_1021ca39: ;
    return (eax & 0xffffff00u) | 1u;
L_1021c8fa: ;
    edi = arg2 * 0x288u + self + 0x804u;
    eax = 0u;
    ecx = 0xa2u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr16(self + rd32(self + 0xcu) * 0x288u + 0x808u, 0xffffu);
    wr32(self + rd32(self + 0xcu) * 0x288u + 0x804u, 0u);
    wr8(self + rd32(self + 0xcu) * 0x288u + 0x80au, 0u);
    if (rd8(self + rd32(self + 0xcu) + 0x18u) == 0u)
    {
        eax = self + rd32(self + 0xcu) + 0x18u;
        goto L_1021c9ee;
    }
    eax = self + rd32(self + 0xcu) + 0x18u;
    ecx = (rd32(self + 0xcu) & 0xffffff00u) | rd8(self + rd32(self + 0xcu) + 0x18u);
    wr8(eax, 1u);
    ecx = (ecx & 0xffffff00u) | 1u;
    esi = self + 0x98u;
L_1021c966: ;
    if (rd16(esi) == 0u)
    {
        edi = (edi & 0xffff0000u) | rd16(esi);
    }
    else
    {
        edi = (edi & 0xffff0000u) | rd16(esi);
        if (rd32(self + 0x10u) == 0u) goto L_1021c97a;
        eax = rd32(self + 0x10u);
        if ((rd32(esi - 0xcu) & eax) == 0u) goto L_1021c9d9;
L_1021c97a: ;
        wr16(self + rd32(self + 0xcu) * 0x288u + rd8(self + rd32(self + 0xcu) + 0x18u) * 8u + 0x808u, (uint16_t)edi);
        wr8(self + rd32(self + 0xcu) * 0x288u + rd8(self + rd32(self + 0xcu) + 0x18u) * 8u + 0x80au, (uint8_t)ecx);
        t7 = rd32(esi - 8u);
        t8 = rd32(self + 0xcu);
        t9 = rd8(self + rd32(self + 0xcu) + 0x18u);
        wr32(self + t8 * 0x288u + t9 * 8u + 0x804u, t7);
        t10 = rd32(self + 0xcu);
        wr8(self + t10 + 0x18u, (uint8_t)(rd8(self + t10 + 0x18u) + 1u));
        eax = self + t10 + 0x18u;
    }
L_1021c9d9: ;
    if ((uint8_t)((uint8_t)ecx + 1u) < 0x51u)
    {
        ecx = (ecx & 0xffffff00u) | (uint8_t)((uint8_t)ecx + 1u);
        esi = esi + 0x18u;
        goto L_1021c966;
    }
    if (rd8(self + rd32(self + 0xcu) + 0x18u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + rd32(self + 0xcu) + 0x18u);
        ecx = rd32(self + 0xcu);
        goto L_1021c9fa;
    }
    eax = (eax & 0xffffff00u) | rd8(self + rd32(self + 0xcu) + 0x18u);
L_1021c9ee: ;
    return eax & 0xffffff00u;
L_1021c9fa: ;
    if ((int32_t)arg2 <= 0)
    {
        edx = self;
    }
    else
    {
        if ((int32_t)arg2 > 2)
        {
            edx = self;
        }
        else
        {
            t11 = (uint8_t)eax - 1u;
            t12 = ecx * 0x288u + self + 0x80cu;
            g->ecx = ecx * 0x51u;
            g->edx = t12;
            g->esp = sp0 - 0x18u;
            cow_cdecl(g, COW_IMG(0x103156f3u), 4, t12, t11, 8u, COW_IMG(0x1021d220u));
            t13 = g->ecx;
            t14 = g->edx;
            ecx = t13;
            edx = t14;
        }
    }
    goto L_1021ca27;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1021c7e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1021c7e0(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
