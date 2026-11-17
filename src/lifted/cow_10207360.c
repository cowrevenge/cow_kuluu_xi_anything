/* f_0x10207360 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=0 */
uint32_t cow_fn_10207360(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
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

    g->eax = rd32(self);
    g->edx = in_edx;
    t1 = rd32(self);
    g->esp = sp0 - 0xcu;
    t2 = cow_thiscall(g, rd32(t1 + 0x54u), self, 0);
    t3 = g->ecx;
    t4 = g->edx;
    g->ecx = t3;
    g->edx = t4;
    t5 = cow_cdecl(g, COW_IMG(0x100eb940u), 1, t2);
    t6 = g->ecx;
    t7 = g->edx;
    if ((uint8_t)t5 == 0u)
    {
        eax = t5;
        ebx = 0u;
    }
    else
    {
        eax = t5;
        ecx = t6;
        edx = t7;
        ebp = t2;
        ebx = 0u;
        edi = 0u;
L_1020737c: ;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t8 = cow_cdecl(g, COW_IMG(0x100eb490u), 2, ebp, edi);
        t9 = g->ecx;
        t10 = g->edx;
        if (t8 == 0u)
        {
            eax = t8;
            ecx = t9;
            edx = t10;
        }
        else
        {
            eax = t8;
            edx = t10;
            esi = t8;
            g->eax = eax;
            g->edx = edx;
            t11 = rd32(COW_IMG(0x10621808u));
            g->esp = sp0 - 0x10u;
            t12 = cow_thiscall(g, COW_IMG(0x1015bc40u), t11, 1, rd16(esi));
            t13 = g->ecx;
            t14 = g->edx;
            if (t12 == 0u)
            {
                eax = t12;
                ecx = t13;
                edx = t14;
            }
            else
            {
                eax = t12;
                ecx = t13;
                edx = t14;
                t15 = rd8(eax + 0x1b3u);
                wr8(eax + 0x1b3u, (uint8_t)(t15 + 1u));
                t16 = rd16(eax + 4u);
                wr8(eax + 0x1b3u, (uint8_t)((uint8_t)(t15 + 1u) - 1u));
                if ((uint16_t)t16 != 0xcu)
                {
                    ecx = (ecx & 0xffffff00u) | (uint8_t)((uint8_t)(t15 + 1u) - 1u);
                }
                else
                {
                    ecx = (ecx & 0xffffff00u) | (uint8_t)((uint8_t)(t15 + 1u) - 1u);
                    if ((rd8(esi + 0x11u) & 0x40u) != 0u)
                    {
                        ebx = ebx + 1u;
                    }
                }
            }
        }
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t17 = cow_cdecl(g, COW_IMG(0x100eb940u), 1, ebp);
        t18 = g->ecx;
        t19 = g->edx;
        if ((int32_t)(edi + 1u) < (int32_t)(uint8_t)t17)
        {
            eax = (uint8_t)t17;
            ecx = t18;
            edx = t19;
            edi = edi + 1u;
            goto L_1020737c;
        }
        eax = (uint8_t)t17;
    }
    return (eax & 0xffffff00u) | ebx != 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10207360(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10207360(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
