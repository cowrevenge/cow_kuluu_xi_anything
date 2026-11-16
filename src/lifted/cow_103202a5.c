/* f_0x103202a5 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=1 */
uint32_t cow_fn_103202a5(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t loc_34;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(COW_IMG(0x103d2d54u)) != 0u) goto L_103202b9;
    edx = in_edx;
L_103202b2: ;
    eax = 0u;
L_10320405: ;
    g->edx = edx;
    return eax;
L_103202b9: ;
    if (rd32(arg1 + 0x14u) != rd32(COW_IMG(0x103d2de8u)))
    {
        eax = rd32(arg1 + 0x14u);
        goto L_103202d7;
    }
    eax = rd32(arg1 + 0x14u);
    if (eax == rd32(COW_IMG(0x103d2df8u))) goto L_103203d9;
L_103202d7: ;
    if (rd32(COW_IMG(0x109b27e0u)) == 0u)
    {
        g->eax = eax;
        g->ecx = self;
        g->edx = in_edx;
        g->esp = sp0 - 0xcu;
        t5 = cow_cdecl(g, COW_IMG(0x10320451u), 11, 1u, 1u, eax, 4u, 1u, 0u, 0u, 2u, 0u, 0u, 0u);
        t6 = g->ecx;
        t7 = g->edx;
        t8 = rd32(arg1 + 0x14u);
        g->esp = sp0 - 0x38u;
        cow_cdecl(g, COW_IMG(0x10320451u), 11, 0u, 1u, t8, 0xau, 5u, 0u, 0u, 2u, 0u, 0u, 0u);
    }
    else
    {
        if (rd16(COW_IMG(0x109b2880u)) != 0u)
        {
            loc_10 = rd16(COW_IMG(0x109b288eu));
            loc_14 = rd16(COW_IMG(0x109b288cu));
            loc_18 = rd16(COW_IMG(0x109b288au));
            loc_1c = rd16(COW_IMG(0x109b2888u));
            ecx = rd16(COW_IMG(0x109b2882u));
            loc_20 = rd16(COW_IMG(0x109b2886u));
            loc_24 = 0u;
            loc_28 = 0u;
            loc_2c = rd16(COW_IMG(0x109b2882u));
            loc_30 = eax;
            loc_34 = 0u;
        }
        else
        {
            loc_10 = rd16(COW_IMG(0x109b288eu));
            loc_14 = rd16(COW_IMG(0x109b288cu));
            loc_18 = rd16(COW_IMG(0x109b288au));
            loc_1c = rd16(COW_IMG(0x109b2888u));
            ecx = rd16(COW_IMG(0x109b2882u));
            loc_20 = 0u;
            loc_24 = rd16(COW_IMG(0x109b2884u));
            loc_28 = rd16(COW_IMG(0x109b2886u));
            loc_2c = rd16(COW_IMG(0x109b2882u));
            loc_30 = eax;
            loc_34 = 1u;
        }
        g->ecx = ecx;
        g->edx = in_edx;
        g->esp = sp0 - 0xcu;
        cow_cdecl(g, COW_IMG(0x10320451u), 11, 1u, loc_34, loc_30, loc_2c, loc_28, loc_24, loc_20, loc_1c, loc_18, loc_14, loc_10);
        t1 = g->ecx;
        t2 = g->edx;
        if (rd16(COW_IMG(0x109b282cu)) != 0u)
        {
            ecx = t1;
            edx = t2;
            loc_10 = rd16(COW_IMG(0x109b283au));
            loc_14 = rd16(COW_IMG(0x109b2838u));
            loc_18 = rd16(COW_IMG(0x109b2836u));
            loc_1c = rd16(COW_IMG(0x109b2834u));
            t4 = rd32(arg1 + 0x14u);
            eax = rd16(COW_IMG(0x109b282eu));
            loc_20 = rd16(COW_IMG(0x109b2832u));
            loc_24 = 0u;
            loc_28 = 0u;
            loc_2c = rd16(COW_IMG(0x109b282eu));
            loc_30 = t4;
            loc_34 = 0u;
        }
        else
        {
            ecx = t1;
            edx = t2;
            loc_10 = rd16(COW_IMG(0x109b283au));
            loc_14 = rd16(COW_IMG(0x109b2838u));
            loc_18 = rd16(COW_IMG(0x109b2836u));
            loc_1c = rd16(COW_IMG(0x109b2834u));
            t3 = rd32(arg1 + 0x14u);
            eax = rd16(COW_IMG(0x109b282eu));
            loc_20 = 0u;
            loc_24 = rd16(COW_IMG(0x109b2830u));
            loc_28 = rd16(COW_IMG(0x109b2832u));
            loc_2c = rd16(COW_IMG(0x109b282eu));
            loc_30 = t3;
            loc_34 = 1u;
        }
        g->esp = sp0 - 0xcu;
        cow_cdecl(g, COW_IMG(0x10320451u), 11, 0u, loc_34, loc_30, loc_2c, loc_28, loc_24, loc_20, loc_1c, loc_18, loc_14, loc_10);
    }
L_103203d9: ;
    if ((int32_t)rd32(COW_IMG(0x103d2decu)) >= (int32_t)rd32(COW_IMG(0x103d2dfcu)))
    {
        eax = rd32(COW_IMG(0x103d2dfcu));
        ecx = rd32(arg1 + 0x1cu);
        edx = rd32(COW_IMG(0x103d2decu));
        goto L_10320409;
    }
    eax = rd32(COW_IMG(0x103d2dfcu));
    ecx = rd32(arg1 + 0x1cu);
    edx = rd32(COW_IMG(0x103d2decu));
    if ((int32_t)ecx < (int32_t)edx) goto L_103202b2;
    if ((int32_t)ecx > (int32_t)eax) goto L_103202b2;
    if ((int32_t)ecx <= (int32_t)edx) goto L_1032041d;
    if ((int32_t)ecx >= (int32_t)eax) goto L_1032041d;
L_10320403: ;
    eax = 1u;
    goto L_10320405;
L_10320409: ;
    if ((int32_t)ecx < (int32_t)eax) goto L_10320403;
    if ((int32_t)ecx > (int32_t)edx) goto L_10320403;
    if ((int32_t)ecx <= (int32_t)eax) goto L_1032041d;
    if ((int32_t)ecx < (int32_t)edx) goto L_103202b2;
L_1032041d: ;
    if (ecx != edx)
    {
        eax = rd32(arg1) * 0x3e8u + rd32(arg1 + 4u) * 0xea60u + rd32(arg1 + 8u) * 0x36ee80u;
        ecx = (int32_t)eax < (int32_t)rd32(COW_IMG(0x103d2e00u));
    }
    else
    {
        eax = rd32(arg1) * 0x3e8u + rd32(arg1 + 4u) * 0xea60u + rd32(arg1 + 8u) * 0x36ee80u;
        ecx = (int32_t)eax >= (int32_t)rd32(COW_IMG(0x103d2df0u));
    }
    eax = ecx;
    goto L_10320405;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_103202a5(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_103202a5(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
