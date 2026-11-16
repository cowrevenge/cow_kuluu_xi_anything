/* f_0x1010bda0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1010bda0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_80c;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 2068u);

    wr32(sp0 - 0x804u, in_ebx);
    wr32(sp0 - 0x808u, in_esi);
    if (rd32(arg2 + 4u) == 0u)
    {
        eax = rd32(arg2 + 4u);
        ecx = 0u;
    }
    else
    {
        eax = rd32(arg2 + 4u);
        ecx = rd32(eax + 4u);
    }
    if (eax == 0u) goto L_1010bea3;
    if (ecx == 0u) goto L_1010bea3;
    if (rd8(ecx) == 0u) goto L_1010bea3;
    g->eax = eax;
    g->esp = sp0 - 0x808u;
    t1 = cow_thiscall(g, COW_IMG(0x10109540u), arg2, 0);
    if ((uint16_t)t1 <= 0x7feu)
    {
        ebx = t1;
    }
    else
    {
        ebx = 0x7feu;
    }
    t2 = rd32(arg2 + 4u);
    wr16(sp0 - 0x800u, (uint16_t)ebx);
    if (t2 == 0u) goto L_1010be02;
    eax = t2;
    if (rd32(eax + 4u) == 0u) goto L_1010be02;
    ecx = rd32(eax + 4u);
    esi = ecx;
L_1010be07: ;
    wr32(sp0 - 0x80cu, in_edi);
    edi = sp0 - 0x7feu;
    ecx = (uint16_t)ebx >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = ebx & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    wr8(sp0 + (uint16_t)ebx - 0x7feu, 0u);
    if ((int32_t)(ebx & 1u) >= 0)
    {
        eax = (uint16_t)ebx;
        edx = (uint16_t)ebx;
        zf = !(ebx & 1u);
    }
    else
    {
        eax = (uint16_t)ebx;
        ecx = ebx & 1u;
        edx = (uint16_t)ebx;
        zf = (ecx - 1u | 0xfffffffeu) + 1u == 0u;
    }
    if (zf)
    {
        wr32(sp0 - 0x80cu, eax + 2u);
        wr32(sp0 - 0x810u, sp0 - 0x800u);
        loc_80c = eax + 2u;
        eax = sp0 - 0x800u;
    }
    else
    {
        wr8(eax + sp0 - 0x7feu, 0u);
        wr32(sp0 - 0x80cu, eax + 3u);
        wr32(sp0 - 0x810u, sp0 - 0x800u);
        edx = sp0 - 0x800u;
        loc_80c = eax + 3u;
        eax = eax + 3u;
    }
    g->eax = eax;
    g->esp = sp0 - 0x808u;
    t3 = cow_fastcall(g, COW_IMG(0x1010c7c0u), arg1, edx, 2, sp0 - 0x800u, loc_80c);
    if (t3 == 0u) goto L_1010bea3;
    eax = t3;
    if (rd32(arg1 + 8u) != 0u)
    {
        ecx = rd32(arg1 + 8u);
        if (rd32(ecx + 4u) == 0u)
        {
            edx = rd32(ecx + 4u);
            goto L_1010be79;
        }
        edx = rd32(ecx + 4u);
        if (rd16(ecx + 0xau) >= (uint16_t)ebx) goto L_1010be7d;
L_1010be79: ;
        wr16(ecx + 0xau, (uint16_t)ebx);
L_1010be7d: ;
        if (edx == 0u) goto L_1010be87;
        if (rd16(ecx + 8u) <= (uint16_t)ebx) goto L_1010be8b;
L_1010be87: ;
        wr16(ecx + 8u, (uint16_t)ebx);
L_1010be8b: ;
        wr32(ecx + 4u, edx + 1u);
    }
    if (rd32(arg1 + 8u) == 0u) goto L_1010bea3;
    ecx = rd32(arg1 + 8u);
    g->ebx = rd32(sp0 - 0x804u);
    g->esi = rd32(sp0 - 0x808u);
    return eax - ecx;
L_1010be02: ;
    esi = COW_IMG(0x103d3c84u);
    goto L_1010be07;
L_1010bea3: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1010bda0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1010bda0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
