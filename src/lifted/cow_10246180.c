/* f_0x10246180 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10246180(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg1 > 5u)
    {
        eax = 0xffffffffu;
        edx = rd32(COW_IMG(0x106690c8u));
        goto L_102462ee;
    }
    ecx = rd32(COW_IMG(0x106690c8u));
    edx = rd32(COW_IMG(0x106690c8u));
    t1 = rd32(COW_IMG(0x102462f4u) + arg1 * 4u);
    switch (t1 - RD)
    {
    case 0x102461a1u: goto L_102461a1;
    case 0x1024620fu: goto L_1024620f;
    case 0x10246243u: goto L_10246243;
    case 0x1024627au: goto L_1024627a;
    case 0x102462a7u: goto L_102462a7;
    case 0x102462d4u: goto L_102462d4;
    default: rt_fatal(g, COW_IMG(0x1024619au), "switch");
    }
    return 0;
L_102461a1: ;
    if (arg2 == 0u) goto L_102461e0;
L_102461ab: ;
    if ((int32_t)arg2 >= 0) goto L_102461b9;
    if ((int32_t)rd32(ecx + 0xc0u) > 0) goto L_102461d6;
L_102461b9: ;
    if (rd32(ecx + 0xc0u) == arg2) goto L_102461d6;
    if (ecx + 0xf4u < edx + 0x1310u)
    {
        ecx = ecx + 0xf4u;
        goto L_102461ab;
    }
    g->edx = edx;
    return 0u;
L_102461d6: ;
    g->edx = edx;
    return 1u;
L_102461e0: ;
L_102461e4: ;
    if ((int32_t)rd32(ecx + 0xc0u) <= 0) goto L_102461fa;
    if ((int32_t)arg3 < 0) goto L_102461d6;
    if (rd32(ecx + 0xc4u) == arg3) goto L_102461d6;
L_102461fa: ;
    if (ecx + 0xf4u < edx + 0x1310u)
    {
        ecx = ecx + 0xf4u;
        goto L_102461e4;
    }
    g->edx = edx;
    return 0u;
L_1024620f: ;
    if ((int32_t)arg2 <= 0)
    {
        eax = 0xffffffffu;
        goto L_102462ee;
    }
L_1024621b: ;
    if (rd32(ecx + 0xc0u) == arg2) goto L_10246238;
    if (ecx + 0xf4u < edx + 0x1310u)
    {
        ecx = ecx + 0xf4u;
        goto L_1024621b;
    }
    g->edx = edx;
    return 0xffffffffu;
L_10246238: ;
    g->edx = edx;
    return (uint32_t)((int32_t)rd32(ecx + 0x70u) >> 0xcu);
L_10246243: ;
    if ((int32_t)arg2 <= 0)
    {
        eax = 0xffffffffu;
        goto L_102462ee;
    }
L_1024624f: ;
    if (rd32(ecx + 0xc0u) == arg2) goto L_1024626c;
    if (ecx + 0xf4u < edx + 0x1310u)
    {
        ecx = ecx + 0xf4u;
        goto L_1024624f;
    }
    g->edx = edx;
    return 0xffffffffu;
L_1024626c: ;
    g->edx = edx;
    return (uint32_t)((int32_t)rd32(ecx + 0x80u) >> 0xcu);
L_1024627a: ;
    if ((int32_t)arg2 <= 0)
    {
        eax = 0xffffffffu;
        goto L_102462ee;
    }
L_10246282: ;
    if (rd32(ecx + 0xc0u) == arg2) goto L_1024629f;
    if (ecx + 0xf4u < edx + 0x1310u)
    {
        ecx = ecx + 0xf4u;
        goto L_10246282;
    }
    g->edx = edx;
    return 0xffffffffu;
L_1024629f: ;
    g->edx = edx;
    return rd32(ecx + 0x6cu);
L_102462a7: ;
    if ((int32_t)arg2 <= 0)
    {
        eax = 0xffffffffu;
        goto L_102462ee;
    }
L_102462af: ;
    if (rd32(ecx + 0xc0u) == arg2) goto L_102462cc;
    if (ecx + 0xf4u < edx + 0x1310u)
    {
        ecx = ecx + 0xf4u;
        goto L_102462af;
    }
    g->edx = edx;
    return 0xffffffffu;
L_102462cc: ;
    g->edx = edx;
    return rd32(ecx + 0x7cu);
L_102462d4: ;
    eax = 0u;
    edx = edx + 0x1310u;
L_102462dc: ;
    if (rd32(ecx + 0x3cu) != 0u)
    {
        eax = eax + 1u;
    }
    if (ecx + 0xf4u < edx)
    {
        ecx = ecx + 0xf4u;
        goto L_102462dc;
    }
L_102462ee: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10246180(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10246180(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
