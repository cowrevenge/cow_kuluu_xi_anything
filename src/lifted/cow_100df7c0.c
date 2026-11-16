/* f_0x100df7c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_100df7c0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = arg4 * 8u - 8u;
    if (arg2 == 0u)
    {
        eax = 0u;
        loc_4 = t1;
        goto L_100df828;
    }
    loc_4 = t1;
    eax = 0u;
    edi = 0u;
L_100df7e5: ;
    if (eax + rd32(arg5 + (uint32_t)(int8_t)rd8(arg1 + edi) * 4u + 0x600u) >= loc_4) goto L_100df838;
    ecx = (uint32_t)(int8_t)rd8(arg1 + edi);
    edx = rd32(arg5 + (uint32_t)(int8_t)rd8(arg1 + edi) * 4u + 0x600u);
    ebx = eax + rd32(arg5 + (uint32_t)(int8_t)rd8(arg1 + edi) * 4u + 0x600u);
    t2 = arg5 + ecx * 4u + 0x200u;
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x100df6e0u), 7, arg3 + 1u, arg4 - 1u, eax, t2, 4u, 0u, edx);
    if (edi + 1u < arg2)
    {
        eax = ebx;
        edi = edi + 1u;
        goto L_100df7e5;
    }
    eax = ebx;
L_100df828: ;
    wr8(arg3, 1u);
    return eax + 8u;
L_100df838: ;
    if (arg4 >= arg2 + 1u) goto L_100df84c;
    return 0xffffffffu;
L_100df84c: ;
    edi = arg3;
    eax = 0u;
    ecx = arg4 >> 2u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = arg4 & 3u;
    while (ecx) { wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    esi = arg1;
    edi = arg3 + 1u;
    ecx = arg2 >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = arg2 & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    wr8(arg3, 0u);
    return arg2 * 8u + 8u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100df7c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100df7c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
