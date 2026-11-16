/* f_0x10286620 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10286620(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int32_t)rd32(arg1 + 0x44u) <= 0)
    {
        eax = rd32(arg1 + 0x44u);
    }
    else
    {
        ecx = self;
        edx = in_edx;
        ebx = 0u;
        ebp = 0u;
L_10286637: ;
        if (rd32(ebx * 4u + rd32(arg1 + 0x3cu)) != 0u)
        {
            esi = rd32(ebx * 4u + rd32(arg1 + 0x3cu));
            if (rd32(esi) == 0xb0001u)
            {
                t22 = rd32(arg1 + 0x40u);
                wr32(ebx * 4u + t22, 0xedfeedfeu);
                ecx = t22;
            }
            else
            {
                eax = rd32(esi);
                if (eax == 0x150001u)
                {
                    t12 = rd32(esi + 0x1cu);
                    g->ecx = ecx;
                    g->edx = t12;
                    g->esp = sp0 - 0x10u;
                    t13 = cow_cdecl(g, COW_IMG(0x10286750u), 2, arg1, t12);
                    t14 = g->ecx;
                    t15 = g->edx;
                    g->ecx = t14;
                    g->edx = t15;
                    g->esp = sp0 - 0x18u;
                    t16 = cow_cdecl(g, COW_IMG(0x10286780u), 2, arg1, ebp);
                    t17 = g->ecx;
                    t18 = g->edx;
                    if (t13 == 0xefbeddbau)
                    {
                        eax = t16;
                        ecx = t17;
                        edx = t18;
                        goto L_102866e9;
                    }
                    eax = t16;
                    ecx = t17;
                    edx = t18;
                    esi = t13;
                    if (eax == 0xefbeddbau) goto L_102866e9;
                    t19 = (esi | 0xffffbc00u) << 0x10u | eax;
                    wr32(ebx * 4u + rd32(arg1 + 0x40u), t19);
                    ebp = ebp + 1u;
                }
                else
                {
                    if (eax == 0x1c0003u)
                    {
                        t4 = rd32(esi + 0x24u);
                        g->ecx = ecx;
                        g->edx = t4;
                        g->esp = sp0 - 0x10u;
                        t5 = cow_cdecl(g, COW_IMG(0x10286720u), 2, arg1, t4);
                        t6 = g->ecx;
                        t7 = g->edx;
                        if (t5 != 0xefbeddbau)
                        {
                            eax = t5;
                            edx = t7;
                            t10 = eax << 8u | rd32(esi + 0x1cu);
                            t11 = rd32(arg1 + 0x40u);
                            wr32(ebx * 4u + t11, t10);
                            ecx = t11;
                        }
                        else
                        {
                            eax = t5;
                            ecx = t6;
                            edx = t7;
                            g->ecx = ecx;
                            g->edx = edx;
                            g->esp = sp0 - 0xcu;
                            cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b8294u), in_esi);
                            t8 = g->ecx;
                            t9 = g->edx;
                            ecx = t8;
                            edx = t9;
                        }
                    }
                    else
                    {
                        t1 = (uint32_t)(int16_t)rd16(esi + 2u);
                        g->ecx = t1;
                        g->edx = edx;
                        g->esp = sp0 - 0x14u;
                        cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b82d0u), t1);
                        t2 = g->ecx;
                        t3 = g->edx;
                        ecx = t2;
                        edx = t3;
                    }
                }
            }
        }
L_10286703: ;
        if ((int32_t)(ebx + 1u) < (int32_t)rd32(arg1 + 0x44u))
        {
            ebx = ebx + 1u;
            goto L_10286637;
        }
        eax = rd32(arg1 + 0x44u);
    }
    return (eax & 0xffffff00u) | (uint8_t)(eax | 0xffu);
L_102866e9: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b8254u), in_esi);
    t20 = g->ecx;
    t21 = g->edx;
    ecx = t20;
    edx = t21;
    ebp = ebp + 1u;
    goto L_10286703;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10286620(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10286620(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
