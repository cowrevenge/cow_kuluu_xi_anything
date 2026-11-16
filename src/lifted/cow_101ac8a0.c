/* f_0x101ac8a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_101ac8a0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_1c8;
    uint32_t loc_1cc;
    uint32_t loc_1d0;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 508u);

    wr32(sp0 - 0x1d4u, in_ebx);
    wr32(sp0 - 0x1d8u, in_esi);
    wr32(sp0 - 0x1dcu, in_edi);
    wr32(sp0 - 0x1c8u, 0u);
    wr32(sp0 - 0x1d0u, 0u);
    if (arg1 != 0u) goto L_101ac8cf;
    return 0xffffffffu;
L_101ac8cf: ;
    wr32(sp0 - 0x1ccu, 0u);
    if (rd8(arg1) == 0u)
    {
        edx = in_edx;
        goto L_101ac961;
    }
    eax = (in_eax & 0xffffff00u) | rd8(arg1);
    edx = in_edx;
    esi = 0u;
    loc_1c8 = 0u;
    loc_1d0 = 0u;
    loc_1cc = 0u;
L_101ac8dd: ;
    if ((int32_t)esi >= (int32_t)arg2) goto L_101ac959;
    wr32(sp0 - 0x1e0u, esi);
    wr32(sp0 - 0x1e4u, arg1);
    g->eax = eax;
    g->ecx = self;
    g->edx = edx;
    g->esp = sp0 - 0x1dcu;
    t1 = cow_stdcall(g, COW_IMG(0x101ad1b0u), 2, arg1, esi);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        wr32(sp0 - 0x1e0u, arg4);
        wr32(sp0 - 0x1e4u, arg3);
        wr32(sp0 - 0x1e8u, sp0 - 0x1ccu);
        wr32(sp0 - 0x1ecu, 0x1c2u);
        wr32(sp0 - 0x1f0u, sp0 - 0x1c4u);
        wr32(sp0 - 0x1f4u, 0x80u);
        wr32(sp0 - 0x1f8u, arg1 + esi);
        wr32(sp0 - 0x1c8u, 1u);
        g->eax = sp0 - 0x1ccu;
        g->edx = arg3;
        g->esp = sp0 - 0x1dcu;
        t6 = cow_thiscall(g, COW_IMG(0x101ac5e0u), self, 7, arg1 + esi, 0x80u, sp0 - 0x1c4u, 0x1c2u, sp0 - 0x1ccu, arg3, arg4);
        t7 = g->edx;
        if ((int32_t)t6 < 0)
        {
            eax = t6;
            edx = t7;
            esi = rd32(sp0 - 0x1ccu);
            loc_1c8 = 1u;
        }
        else
        {
            eax = t6;
            edx = t7;
            esi = rd32(sp0 - 0x1ccu);
            t8 = eax + rd32(sp0 - 0x1d0u);
            wr32(sp0 - 0x1d0u, t8);
            loc_1d0 = t8;
            loc_1c8 = 1u;
        }
    }
    else
    {
        ecx = t2;
        edx = t3;
        wr32(sp0 - 0x1e0u, arg1 + esi);
        g->eax = arg1 + esi;
        g->esp = sp0 - 0x1dcu;
        t4 = cow_cdecl(g, COW_IMG(0x1011da80u), 1, arg1 + esi);
        t5 = t4 + rd32(sp0 - 0x1d0u);
        wr32(sp0 - 0x1d0u, t5);
        wr32(sp0 - 0x1ccu, esi + t4);
        eax = t4;
        edx = t5;
        loc_1d0 = t5;
        loc_1cc = esi + t4;
        esi = esi + t4;
    }
    if (rd8(arg1 + esi) != 0u) goto L_101ac8dd;
L_101ac959: ;
    if (loc_1c8 != 0u) goto L_101ac96f;
L_101ac961: ;
    g->edx = edx;
    return 0u;
L_101ac96f: ;
    g->edx = loc_1d0;
    return loc_1d0 + 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ac8a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101ac8a0(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
