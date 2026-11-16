/* f_0x10065a10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10065a10(Guest* g)
{
    double d8;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 24u);

    wr32(sp0 - 4u, in_esi);
    if (arg1 != 0u) goto L_10065a24;
    return COW_IMG(0x10353b90u);
L_10065a24: ;
    eax = arg1;
    ecx = self;
L_10065a28: ;
    t1 = rd8(eax);
    wr8(eax + self - arg1, (uint8_t)t1);
    if ((uint8_t)t1 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t1;
        goto L_10065a28;
    }
    eax = eax + 1u;
    wr32(sp0 - 8u, self);
    g->eax = eax;
    g->edx = self - arg1;
    g->esp = sp0 - 4u;
    t2 = cow_thiscall(g, COW_IMG(0x10065990u), self, 1, self);
    t3 = g->edx;
    if (t2 == 0u) goto L_10065a9a;
    eax = t2;
    edx = t3;
L_10065a3e: ;
    if (rd32(eax + 0x10u) == 1u)
    {
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t11 = cow_thiscall(g, COW_IMG(0x100643f0u), eax, 0);
        t12 = g->ecx;
        t13 = g->edx;
        wr32(sp0 - 8u, t11);
        wr32(sp0 - 0xcu, COW_IMG(0x10352ff0u));
        wr32(sp0 - 0x10u, self);
        g->edx = t13;
        t14 = cow_cdecl(g, COW_IMG(0x10312031u), 3, self, COW_IMG(0x10352ff0u), t11);
        t15 = g->edx;
        eax = t14;
        edx = t15;
    }
    else
    {
        ecx = rd32(eax + 0x10u) - 1u;
        if (ecx == 1u)
        {
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 4u;
            t5 = cow_thiscall(g, COW_IMG(0x10064400u), eax, 0);
            t6 = g->ecx;
            t7 = g->edx;
            d8 = cow_take_float(g);
            wrf64(sp0 - 0xcu, d8);
            wr32(sp0 - 0x10u, COW_IMG(0x10353bacu));
            wr32(sp0 - 0x14u, self);
            g->edx = t7;
            g->esp = sp0;
            t9 = cow_cdecl(g, COW_IMG(0x10312031u), 5, self, COW_IMG(0x10353bacu), cow_dlo(d8), cow_dhi(d8), rd32(sp0 - 4u));
            t10 = g->edx;
            eax = t9;
            edx = t10;
        }
        else
        {
            ecx = ecx - 1u;
            if (ecx == 1u)
            {
                ecx = rd32(eax + 0x18u);
                edx = self;
L_10065a4f: ;
                t4 = rd8(ecx);
                wr8(edx, (uint8_t)t4);
                if ((uint8_t)t4 != 0u)
                {
                    eax = (eax & 0xffffff00u) | t4;
                    ecx = ecx + 1u;
                    edx = edx + 1u;
                    goto L_10065a4f;
                }
                eax = (eax & 0xffffff00u) | t4;
                edx = edx + 1u;
            }
        }
    }
    wr32(sp0 - 8u, self);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t16 = cow_thiscall(g, COW_IMG(0x10065990u), self, 1, self);
    t17 = g->edx;
    if (t16 != 0u)
    {
        eax = t16;
        edx = t17;
        goto L_10065a3e;
    }
L_10065a9a: ;
    g->esi = rd32(sp0 - 4u);
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10065a10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10065a10(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
