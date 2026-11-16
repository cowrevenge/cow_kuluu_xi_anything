/* f_0x100e95e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=8 */
uint32_t cow_fn_100e95e0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
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
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg8 = rd32(g->esp + 0x20u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        goto L_100e9625;
    }
    eax = rd32(COW_IMG(0x104dfd98u));
    if (rd8(arg5) == 0u) goto L_100e9625;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_cdecl(g, COW_IMG(0x100eb940u), 1, (uint8_t)arg2);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)arg3 >= (uint8_t)t1)
    {
        eax = t1;
        goto L_100e9625;
    }
    ecx = (t2 & 0xffffff00u) | (uint8_t)arg3;
    edx = t3;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t4 = cow_cdecl(g, COW_IMG(0x100fc3c0u), 3, 0xc4u, 0u, 0u);
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 != 0u)
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        goto L_100e962a;
    }
    eax = t4;
L_100e9625: ;
    return eax & 0xffffff00u;
L_100e962a: ;
    wr8(eax + 7u, (uint8_t)arg2);
    wr8(eax + 0x1bu, (uint8_t)arg1);
    wr8(eax + 6u, (uint8_t)arg3);
    wr8(eax + 8u, (uint8_t)arg4);
    wr32(eax + 0xcu, rd32(arg5));
    t7 = rd32(arg5 + 4u);
    wr32(eax + 0x10u, t7);
    t8 = rd32(arg5 + 8u);
    wr32(eax + 0x14u, t8);
    t9 = rd16(arg5 + 0xcu);
    wr16(eax + 0x18u, (uint16_t)t9);
    t10 = rd8(arg5 + 0xeu);
    wr8(eax + 0x1au, (uint8_t)t10);
    wr16(eax + 4u, (uint16_t)((uint8_t)(arg7 << 4u ^ (arg6 & 0xff0fu)) | (arg8 << 8u >> 8u | 0xf0u) << 8u));
    g->eax = eax;
    g->esp = sp0 - 8u;
    t11 = cow_cdecl(g, COW_IMG(0x100fc4d0u), 3, eax, 0x1cu, 0u);
    if ((uint8_t)arg4 == 0u)
    {
        eax = t11;
    }
    else
    {
        wr32((uint8_t)arg1 * 4u + rd32(COW_IMG(0x104dfd98u)) + 0x9818u, 1u);
        eax = (uint8_t)arg1;
    }
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e95e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e95e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
