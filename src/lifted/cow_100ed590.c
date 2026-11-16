/* f_0x100ed590 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100ed590(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(sp0 + 4u);
    edi = t1;
    eax = 0u;
    ecx = arg2 >> 2u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = arg2 & 3u;
    while (ecx) { wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    if ((int32_t)arg2 <= 0)
    {
        ebp = t1;
        edi = 0u;
    }
    else
    {
        ebp = t1;
        ecx = 0u;
        edx = 0u;
        ebx = arg2;
        esi = 0u;
        edi = 0u;
L_100ed5c2: ;
        wr32(sp0 + 4u, ecx + 1u);
        if ((int8_t)rd8(arg3 + ecx) < 65)
        {
            eax = (arg3 & 0xffffff00u) | rd8(arg3 + ecx);
            goto L_100ed5db;
        }
        eax = (arg3 & 0xffffff00u) | rd8(arg3 + ecx);
        if ((int8_t)eax > 90) goto L_100ed5db;
        eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax + 0xdau);
L_100ed5ee: ;
        if ((int32_t)(esi + 6u) >= 8)
        {
            edx = edx | (uint32_t)((int32_t)((uint16_t)(uint32_t)(int8_t)eax << 0xau) >> ((esi & 0x1fu) < 0x20u ? esi & 0x1fu : 0x1fu));
            esi = esi + 6u;
            goto L_100ed60d;
        }
        edx = edx | (uint32_t)((int32_t)((uint16_t)(uint32_t)(int8_t)eax << 0xau) >> ((esi & 0x1fu) < 0x20u ? esi & 0x1fu : 0x1fu));
        ebx = (uint32_t)((int32_t)((uint16_t)(uint32_t)(int8_t)eax << 0xau) >> ((esi & 0x1fu) < 0x20u ? esi & 0x1fu : 0x1fu));
        esi = esi + 6u;
        if ((uint8_t)eax != 0x3fu) goto L_100ed5be;
L_100ed60d: ;
        wr8(ebp + edi, (uint8_t)(edx >> 8u));
        t2 = (uint8_t)edx << 8u;
        if ((uint8_t)eax == 0x3fu) goto L_100ed62a;
        edx = t2;
        esi = esi - 8u;
        if ((int32_t)(edi + 1u) < (int32_t)arg2)
        {
            ebx = arg2;
            edi = edi + 1u;
            goto L_100ed5be;
        }
        edi = edi + 1u;
    }
L_100ed62a: ;
    if (edi != arg2) goto L_100ed63a;
    wr8(arg2 + ebp - 1u, 0u);
    return 0u;
L_100ed5be: ;
    ecx = rd32(sp0 + 4u);
    goto L_100ed5c2;
L_100ed5db: ;
    if ((int8_t)eax < 97) goto L_100ed5e7;
    if ((int8_t)eax > 122) goto L_100ed5e7;
    eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax + 0xa0u);
    goto L_100ed5ee;
L_100ed5e7: ;
    eax = (eax & 0xffffff00u) | (uint8_t)(((uint8_t)eax == 0u) + 0x3eu);
    goto L_100ed5ee;
L_100ed63a: ;
    return ebp;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100ed590(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100ed590(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
