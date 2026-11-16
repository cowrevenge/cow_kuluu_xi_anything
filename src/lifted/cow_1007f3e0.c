/* f_0x1007f3e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1007f3e0(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t in_edx = g->edx;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->edx = in_edx;
    t1 = cow_stdcall(g, COW_IMG(0x100fc510u), 0);
    t2 = g->edx;
    if (t1 != 0u)
    {
        eax = t1;
        goto L_1007f3f0;
    }
    edx = t2;
    g->edx = edx;
    return -arg3;
L_1007f3f0: ;
    if (rd32(COW_IMG(0x1047d490u)) != 2u) goto L_1007f45d;
    t3 = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
    esi = t3;
    edi = COW_IMG(0x1034f488u);
    ecx = 4u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (zf)
    {
        edx = 0u;
        ebx = t3;
    }
    else
    {
        ebx = t3;
        edx = -cf + 1u - cf;
    }
    if (edx != 0u) goto L_1007f43d;
    t4 = rd32(eax + 4u);
    g->edx = t4;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x100780a0u), 5, rd32(eax), t4, 0x18u, edx, edx);
    t5 = g->edx;
    g->edx = t5;
    return arg3;
L_1007f43d: ;
    esi = ebx;
    edi = COW_IMG(0x10357d7cu);
    ecx = 3u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (zf)
    {
        edx = 0u;
    }
    else
    {
        edx = -cf + 1u - cf;
    }
    if (edx != 0u) goto L_1007f45d;
L_1007f461: ;
    t6 = rd32(eax + 4u);
    g->edx = rd32(eax);
    t7 = rd32(eax);
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x100780a0u), 3, t7, t6, 0x18u);
    t8 = g->edx;
    g->edx = t8;
    return arg3;
L_1007f45d: ;
    goto L_1007f461;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1007f3e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1007f3e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
