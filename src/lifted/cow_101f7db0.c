/* f_0x101f7db0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101f7db0(Guest* g)
{
    uint32_t eax;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(COW_IMG(0x104dfd98u)) != 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        g->eax = eax;
        g->edx = in_edx;
        g->esp = sp0 - 0x18u;
        t1 = cow_thiscall(g, COW_IMG(0x101f9010u), self, 1, arg1);
        t2 = g->edx;
        if ((uint8_t)arg1 != 0u)
        {
            eax = t1;
            edx = t2;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t3 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
            t4 = g->edx;
            if (t3 != 0u)
            {
                edx = t4;
                esi = t3;
                g->eax = rd32(esi);
                t5 = rd32(esi);
                g->esp = sp0 - 0x14u;
                t6 = cow_thiscall(g, rd32(t5 + 0x1bcu), esi, 0);
                t7 = rd32(t6);
                t8 = cow_thiscall(g, rd32(rd32(esi) + 0x1bcu), esi, 0);
                t9 = rd32(t8 + 4u);
                g->eax = t9;
                t10 = cow_thiscall(g, rd32(rd32(esi) + 0x1bcu), esi, 0);
                t11 = rd32(t10 + 8u);
                cow_thiscall(g, rd32(rd32(esi) + 0x1bcu), esi, 0);
                g->eax = t11;
                g->edx = t7;
                t12 = rd32(COW_IMG(0x10631f24u));
                t13 = cow_thiscall(g, COW_IMG(0x101811d0u), t12, 3, t7, t9, t11);
                t14 = g->ecx;
                t15 = g->edx;
                g->edx = t15;
                t16 = cow_thiscall_cdecl(g, COW_IMG(0x100e8b80u), t14, 1, 5u);
                t17 = g->ecx;
                t18 = g->edx;
                g->edx = t18;
                t19 = cow_stdcall(g, COW_IMG(0x100e8c70u), 0);
                t20 = g->edx;
                if (t19 == 0u) goto L_101f7eb5;
                eax = t19;
                edx = t20;
                esi = t13;
L_101f7e54: ;
                if (rd32(COW_IMG(0x10480af0u) + rd16(eax + 0x18u) * 4u) == 0u)
                {
                    ecx = rd32(COW_IMG(0x10480af0u) + rd16(eax + 0x18u) * 4u);
                }
                else
                {
                    ecx = rd32(COW_IMG(0x10480af0u) + rd16(eax + 0x18u) * 4u);
                    if (rd32(ecx + 0xa0u) == 0u)
                    {
                        edx = rd32(ecx + 0xa0u);
                    }
                    else
                    {
                        t21 = rd32(ecx + 4u);
                        t22 = rd32(ecx + 8u);
                        t23 = rd32(ecx + 0xcu);
                        t24 = rd32(eax + 0x14u);
                        t25 = (t21 & 0xffff0000u) | rd16(rd32(COW_IMG(0x104dfd98u)) + 0x3c350u);
                        g->eax = t24;
                        g->ecx = rd32(COW_IMG(0x104dfd98u));
                        g->edx = t25;
                        t26 = rd32(COW_IMG(0x104dfd98u));
                        g->esp = sp0 - 0x14u;
                        t27 = cow_cdecl(g, COW_IMG(0x101f7ec0u), 6, t25, esi, t24, t21, t22, t23);
                        t28 = g->ecx;
                        t29 = g->edx;
                        eax = t27;
                        ecx = t28;
                        edx = t29;
                    }
                }
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x14u;
                t30 = cow_stdcall(g, COW_IMG(0x100e8c70u), 0);
                t31 = g->edx;
                if (t30 != 0u)
                {
                    eax = t30;
                    edx = t31;
                    goto L_101f7e54;
                }
            }
        }
    }
L_101f7eb5: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f7db0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101f7db0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
