/* f_0x101ca420 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=7 */
uint32_t cow_fn_101ca420(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_8;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(sp0 + 0x14u);
    edi = t1;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t2 = ~ecx - 1u;
    if ((int32_t)(~ecx - 1u) <= 0) goto L_101ca4cc;
    ebp = t1;
    loc_4 = t2;
    t3 = (uint32_t)(int16_t)rd16(sp0 + 8u);
    wr32(sp0 + 0x14u, t3);
    esi = 0u;
    loc_8 = 0u;
L_101ca454: ;
    g->edx = arg3;
    g->esp = sp0 - 0x18u;
    t4 = cow_thiscall_cdecl(g, COW_IMG(0x101ca570u), arg6, 3, arg3, ebp + esi, arg6);
    t5 = g->edx;
    if (rd8(ebp + esi + t4 - 1u) != 0xau)
    {
        eax = t4;
        edx = t5;
        ebx = esi + t4;
        edi = ebp + esi;
        esi = esi + t4;
    }
    else
    {
        eax = t4;
        edx = t5;
        ebx = esi + t4;
        edi = ebp + esi;
        esi = esi + t4;
        esi = esi - 1u;
    }
    wr8(sp0 + 8u, rd8(ebp + esi));
    t6 = rd32(sp0 + 0x14u);
    wr8(ebp + esi, 0u);
    g->edx = edx;
    g->esp = sp0;
    cow_cdecl(g, COW_IMG(0x10129f00u), 11, (uint32_t)(int16_t)arg1, t6, edi, 0u, arg7, in_ebx, in_edi, in_esi, in_ebp, loc_8, loc_4);
    t7 = g->edx;
    wr8(ebp + esi, rd8(sp0 + 8u));
    t8 = t6 + (uint32_t)(int16_t)arg4;
    wr32(sp0 + 0x14u, t8);
    if ((int32_t)ebx < (int32_t)loc_4)
    {
        esi = ebx;
        loc_8 = loc_8 + 1u;
        goto L_101ca454;
    }
    edx = loc_8 + 1u;
    g->edx = edx;
    return edx;
L_101ca4cc: ;
    g->edx = 0u;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ca420(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101ca420(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
