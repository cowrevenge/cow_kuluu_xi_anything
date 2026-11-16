/* f_0x10128950 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_10128950(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd8(arg3) == 0u) goto L_10128a83;
    ecx = (self & 0xffffff00u) | rd8(arg3);
    eax = 0u;
    ebx = rd32(sp0 + 4u) + 4u;
    esi = 0u;
    edi = rd32(sp0 + 4u);
    loc_4 = 0u;
L_10128972: ;
    if (rd8(arg3 + eax) != 0x7fu)
    {
        ecx = (ecx & 0xffffff00u) | rd8(arg3 + eax);
        ebp = arg3 + eax;
        goto L_10128a09;
    }
    ebp = arg3 + eax;
    if ((uint32_t)(int8_t)rd8(arg3 + eax + 1u) + 5u > 0x3du)
    {
        ecx = (uint32_t)(int8_t)rd8(arg3 + eax + 1u) + 5u;
        goto L_10128a06;
    }
    ecx = (uint32_t)(int8_t)rd8(arg3 + eax + 1u) + 5u;
    t1 = rd32(COW_IMG(0x10128a90u) + rd8(COW_IMG(0x10128aa0u) + ecx) * 4u);
    switch (t1 - RD)
    {
    case 0x1012899du: goto L_1012899d;
    case 0x101289b2u: edx = rd8(COW_IMG(0x10128aa0u) + ecx); goto L_101289b2;
    case 0x101289e4u: goto L_101289e4;
    case 0x10128a06u: goto L_10128a06;
    default: rt_fatal(g, COW_IMG(0x10128996u), "switch");
    }
    return;
L_1012899d: ;
    wr32(edi, esi);
    wr16(ebx, rd16(ebp));
    ecx = arg2 + esi;
L_10128a52: ;
    wr16(ecx, 0x404u);
    eax = eax + 2u;
    ebx = ebx + 8u;
    esi = esi + 2u;
    edi = edi + 8u;
L_10128a63: ;
    loc_4 = eax;
L_10128a67: ;
    if (rd8(arg3 + eax) != 0u) goto L_10128972;
    wr8(arg2 + esi, 0u);
    g->edx = arg2;
    return;
L_101289b2: ;
    wr32(edi, esi);
    t2 = rd16(ebp);
    wr16(ebx, (uint16_t)t2);
    wr8(ebx + 2u, rd8(ebp + 2u));
    wr16(arg2 + esi, 0x404u);
    wr8(arg2 + esi + 2u, 4u);
    eax = eax + 3u;
    ecx = arg2;
    ebx = ebx + 8u;
    esi = esi + 3u;
    edi = edi + 8u;
    goto L_10128a63;
L_101289e4: ;
    wr32(edi, esi);
    wr32(ebx, rd32(ebp));
    wr32(arg2 + esi, 0x4040404u);
    eax = eax + 4u;
    ecx = arg2 + esi;
    ebx = ebx + 8u;
    esi = esi + 4u;
    edi = edi + 8u;
    goto L_10128a63;
L_10128a06: ;
    eax = eax + 1u;
    goto L_10128a63;
L_10128a09: ;
    if ((uint8_t)ecx == 0x1eu) goto L_10128a43;
    if ((uint8_t)ecx == 0x1fu) goto L_10128a43;
    g->edx = arg3;
    g->esp = sp0 - 0x14u;
    t3 = cow_cdecl(g, COW_IMG(0x1011da80u), 1, ebp);
    t4 = g->edx;
    wr32(sp0 + 4u, t3);
    g->esp = sp0 - 0x18u;
    cow_call_regs(g, COW_IMG(0x10312090u), arg2, g->ecx, g->edx, 1, 3, arg2 + esi, ebp, t3);
    t5 = loc_4 + rd32(sp0 + 4u);
    eax = t5;
    ecx = t5;
    esi = esi + rd32(sp0 + 4u);
    loc_4 = t5;
    goto L_10128a67;
L_10128a43: ;
    wr32(edi, esi);
    wr16(ebx, rd16(ebp));
    ecx = arg2 + esi;
    goto L_10128a52;
L_10128a83: ;
    wr8(arg2, 0u);
    g->edx = arg3;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10128950(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10128950(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
