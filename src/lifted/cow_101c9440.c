/* f_0x101c9440 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_101c9440(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    unsigned of;
    unsigned pf;
    unsigned sf;
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
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 48u);

    if ((uint8_t)arg3 == 0u)
    {
        eax = arg1;
    }
    else
    {
        if ((int32_t)arg1 <= 999999999)
        {
            if ((int32_t)arg1 >= 0)
            {
                eax = arg1;
            }
            else
            {
                eax = 0u;
            }
        }
        else
        {
            eax = 0x3b9ac9ffu;
        }
    }
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    if ((int32_t)eax >= 0)
    {
        esi = 1u;
    }
    else
    {
        eax = -eax;
        esi = 0xffffffffu;
    }
    ecx = 0u;
L_101c9475: ;
    t1 = cow_divs(g, eax, 0x3e8u);
    t2 = cow_mods(g, eax, 0x3e8u);
    wr16(ecx * 2u + sp0 - 8u, (uint16_t)t2);
    if ((int32_t)t1 <= 0)
    {
        edx = t2;
        goto L_101c948c;
    }
    eax = t1;
    edx = t2;
    if ((int32_t)(ecx + 1u) < 3)
    {
        ecx = ecx + 1u;
        goto L_101c9475;
    }
    ecx = ecx + 1u;
L_101c948c: ;
    if (ecx == 0u)
    {
        t15 = (uint32_t)(int16_t)rd16(sp0 - 8u) * esi;
        wr32(sp0 - 0x14u, t15);
        wr32(sp0 - 0x18u, COW_IMG(0x10352ff0u));
        wr32(sp0 - 0x1cu, COW_IMG(0x10662e10u));
        g->ecx = t15;
        g->esp = sp0 - 8u;
        t16 = cow_cdecl(g, COW_IMG(0x10312031u), 5, COW_IMG(0x10662e10u), COW_IMG(0x10352ff0u), t15, in_edi, in_esi);
        t17 = g->ecx;
        eax = t16;
        ecx = t17;
    }
    else
    {
        if (ecx == 1u)
        {
            t10 = (uint32_t)(int16_t)rd16(sp0 - 8u);
            wr32(sp0 - 0x14u, t10);
            t11 = (uint32_t)(int8_t)rd8(COW_IMG(0x10662f64u));
            wr32(sp0 - 0x18u, t11);
            t12 = (uint32_t)(int16_t)rd16(sp0 - 6u) * esi;
            wr32(sp0 - 0x1cu, t12);
            wr32(sp0 - 0x20u, COW_IMG(0x1037d4f4u));
            wr32(sp0 - 0x24u, COW_IMG(0x10662e10u));
            g->ecx = t10;
            g->esp = sp0 - 0x10u;
            t13 = cow_cdecl(g, COW_IMG(0x10312031u), 5, COW_IMG(0x10662e10u), COW_IMG(0x1037d4f4u), t12, t11, t10);
            t14 = g->ecx;
            eax = t13;
            ecx = t14;
        }
        else
        {
            ecx = ecx - 1u;
            if (ecx == 1u)
            {
                t4 = (uint32_t)(int16_t)rd16(sp0 - 8u);
                wr32(sp0 - 0x14u, t4);
                t5 = (uint32_t)(int8_t)rd8(COW_IMG(0x10662f64u));
                wr32(sp0 - 0x18u, t5);
                t6 = (uint32_t)(int16_t)rd16(sp0 - 6u);
                wr32(sp0 - 0x1cu, t6);
                wr32(sp0 - 0x20u, t5);
                t7 = (uint32_t)(int16_t)rd16(sp0 - 4u) * esi;
                wr32(sp0 - 0x24u, t7);
                wr32(sp0 - 0x28u, COW_IMG(0x1037d500u));
                wr32(sp0 - 0x2cu, COW_IMG(0x10662e10u));
                g->ecx = t4;
                g->esp = sp0 - 0x18u;
                t8 = cow_cdecl(g, COW_IMG(0x10312031u), 5, COW_IMG(0x10662e10u), COW_IMG(0x1037d500u), t7, t5, t6);
                t9 = g->ecx;
                eax = t8;
                ecx = t9;
            }
            else
            {
                ecx = ecx - 1u;
                eax = 0u;
L_101c9499: ;
                t3 = rd8(COW_IMG(0x10353b90u) + eax);
                wr8(COW_IMG(0x10662e10u) + eax, (uint8_t)t3);
                if ((uint8_t)t3 != 0u)
                {
                    eax = eax + 1u;
                    ecx = (ecx & 0xffffff00u) | t3;
                    goto L_101c9499;
                }
                eax = eax + 1u;
                ecx = (ecx & 0xffffff00u) | t3;
            }
        }
    }
    if ((uint8_t)arg2 != 0u)
    {
        t18 = rd32(COW_IMG(0x1037d4f0u));
        edi = COW_IMG(0x10662e10u);
        eax = 0u;
        ecx = 0xffffffffu;
        cf = 0u;
        pf = PARITY(0u);
        af = 0u;
        zf = 1u;
        sf = 0u;
        of = 0u;
        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
        wr32(edi - 1u, t18);
    }
    return COW_IMG(0x10662e10u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c9440(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101c9440(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
