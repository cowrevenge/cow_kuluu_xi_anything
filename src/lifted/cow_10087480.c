/* f_0x10087480 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10087480(Guest* g)
{
    double d11;
    double d12;
    double d13;
    double d7;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_8;
    double loc_c_f;
    uint32_t t1;
    uint32_t t10;
    uint32_t t14;
    uint32_t t15;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t8;
    uint32_t t9;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    t1 = cow_call_regs(g, COW_IMG(0x101cc4f0u), in_eax, g->ecx, g->edx, 1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t3;
        goto L_100875b4;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    esi = t1;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t4 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t5 = g->ecx;
    t6 = g->edx;
    d7 = cow_take_float(g);
    fpush(g, d7);
    t8 = cow_call_regs(g, COW_IMG(0x10311c6cu), t4, g->ecx, g->edx, 1, 0);
    if ((int32_t)(uint8_t)rd32(COW_IMG(0x10487e54u)) <= (int32_t)t8)
    {
        eax = t8;
        wr8(COW_IMG(0x10487e54u), 0u);
    }
    else
    {
        eax = t8;
        wr8(COW_IMG(0x10487e54u), (uint8_t)(rd8(COW_IMG(0x10487e54u)) - (uint8_t)eax));
    }
    t9 = rd32(esi + 4u);
    t10 = rd32(esi + 0xcu);
    eax = t10;
    edx = COW_IMG(0x10480af0u);
    ebx = (in_ebx & 0xffffff00u) | rd8(COW_IMG(0x10487e54u)) == 0u;
    edi = 0u;
    loc_8 = t9;
    loc_4 = t10;
    x0 = (double)rdf32(COW_IMG(0x1032d68cu));
L_100874e3: ;
    if (rd32(edx) == 0u)
    {
        ecx = rd32(edx);
    }
    else
    {
        ecx = rd32(edx);
        if (!(rd32(ecx + 0x120u) >> 9u & 1u))
        {
            eax = rd32(ecx + 0x120u) >> 9u;
        }
        else
        {
            if ((rd32(ecx + 0x78u) & 0xff000000u) != 0x1000000u)
            {
                eax = rd32(ecx + 0x78u) & 0xff000000u;
            }
            else
            {
                eax = rd32(ecx + 0x78u) & 0xff000000u;
                if (rd8(ecx + 0xeeu) == 3u)
                {
                    if (rd32(ecx + 0xa0u) == 0u)
                    {
                        eax = rd32(ecx + 0xa0u);
                    }
                    else
                    {
                        eax = rd32(ecx + 0xa0u);
                        if (rd16(eax + 0xb2u) == 0u)
                        {
                            d11 = fr(g, (double)rdf32(ecx + 0xcu) - cow_bits2f(loc_4));
                            d12 = fr(g, (double)rdf32(ecx + 4u) - cow_bits2f(loc_8));
                            d13 = (double)(float)fr(g, fr(g, d11 * d11) + fr(g, d12 * d12));
                            if ((cow_fsw(g, d13, (double)rdf32(COW_IMG(0x1032a3a0u)), 1u) & 0x4100u) == 0u)
                            {
                                eax = cow_fsw(g, d13, (double)rdf32(COW_IMG(0x1032a3a0u)), 1u) & 0x4100u;
                            }
                            else
                            {
                                eax = cow_fsw(g, d13, (double)rdf32(COW_IMG(0x1032a3a0u)), 1u) & 0x4100u;
                                loc_c_f = d13;
                                if ((cow_fsw(g, loc_c_f, x0, 1u) & 0x4100u) == 0u)
                                {
                                    eax = cow_fsw(g, loc_c_f, x0, 1u) & 0x4100u;
                                }
                                else
                                {
                                    eax = cow_fsw(g, loc_c_f, x0, 1u) & 0x4100u;
                                    edi = ecx + 0x74u;
                                    x0 = loc_c_f;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((int32_t)(edx + 4u) < (int32_t)COW_IMG(0x10482ef0u))
    {
        edx = edx + 4u;
        goto L_100874e3;
    }
    edx = edx + 4u;
    if (edi == 0u) goto L_100875ad;
    if ((uint8_t)ebx == 0u) goto L_100875b4;
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t14 = cow_call_regs(g, COW_IMG(0x1007bf30u), eax, g->ecx, g->edx, 1, 5, edi, 0u, 0u, 0u, 1u);
    t15 = g->edx;
    if (t14 == 0u)
    {
        eax = t14;
        edx = t15;
        goto L_100875b4;
    }
    eax = t14;
    edx = t15;
    wr8(COW_IMG(0x10487e54u), 0x96u);
    g->ebx = in_ebx;
    g->edx = edx;
    return eax;
L_100875ad: ;
    wr8(COW_IMG(0x10487e54u), 0u);
L_100875b4: ;
    g->ebx = in_ebx;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10087480(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10087480(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
