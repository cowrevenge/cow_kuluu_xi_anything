/* f_0x101ac990 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=6 */
uint32_t cow_fn_101ac990(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_1cc;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 508u);

    wr32(sp0 - 0x1d0u, in_ebx);
    wr32(sp0 - 0x1d4u, in_esi);
    wr32(sp0 - 0x1c8u, self);
    if (arg3 != 0u) goto L_101ac9b7;
    return 0xffffffffu;
L_101ac9b7: ;
    wr32(sp0 - 0x1d8u, in_ebp);
    wr32(sp0 - 0x1dcu, in_edi);
    wr32(sp0 - 0x1ccu, 0u);
    if (rd8(arg3) == 0u)
    {
        edx = in_edx;
        esi = 0u;
        goto L_101aca9e;
    }
    edx = in_edx;
    esi = 0u;
    edi = 0u;
    loc_1cc = 0u;
L_101ac9c9: ;
    if ((int32_t)edi >= (int32_t)arg4) goto L_101aca9e;
    wr32(sp0 - 0x1e0u, edi);
    wr32(sp0 - 0x1e4u, arg3);
    g->ecx = self;
    g->edx = edx;
    g->esp = sp0 - 0x1dcu;
    t1 = cow_stdcall(g, COW_IMG(0x101ad1b0u), 2, arg3, edi);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 != 0u) goto L_101aca34;
    ecx = t2;
    edx = t3;
    wr32(sp0 - 0x1e0u, arg3 + edi);
    g->edx = edx;
    g->esp = sp0 - 0x1dcu;
    t4 = cow_cdecl(g, COW_IMG(0x1011da80u), 1, arg3 + edi);
    t5 = g->edx;
    wr32(sp0 - 0x1ccu, esi + t4);
    if ((int32_t)(esi + t4) >= (int32_t)arg2)
    {
        edx = t5;
        goto L_101aca9e;
    }
    eax = esi + t4;
    edx = t5;
    ebx = t4;
    ebp = arg3 + edi;
    loc_1cc = esi + t4;
    wr32(sp0 - 0x1e0u, ebx);
    wr32(sp0 - 0x1e4u, ebp);
    wr32(sp0 - 0x1e8u, arg1 + esi);
    g->edx = edx;
    g->esp = sp0 - 0x1dcu;
    cow_call_regs(g, COW_IMG(0x10312090u), eax, g->ecx, g->edx, 1, 3, arg1 + esi, ebp, ebx);
    t6 = g->edx;
    wr32(sp0 - 0x1ccu, ebx + edi);
    t7 = rd32(sp0 - 0x1ccu);
    wr8(arg1 + t7, 0u);
    edx = t6;
    esi = t7;
    loc_1cc = ebx + edi;
    edi = ebx + edi;
L_101aca94: ;
    if (rd8(arg3 + edi) != 0u) goto L_101ac9c9;
L_101aca9e: ;
    wr8(arg1 + esi, 0u);
    g->edx = edx;
    return esi;
L_101aca34: ;
    wr32(sp0 - 0x1e0u, arg6);
    wr32(sp0 - 0x1e4u, arg5);
    wr32(sp0 - 0x1e8u, sp0 - 0x1ccu);
    wr32(sp0 - 0x1ecu, 0x1c2u);
    wr32(sp0 - 0x1f0u, sp0 - 0x1c4u);
    wr32(sp0 - 0x1f4u, arg2 - esi);
    wr32(sp0 - 0x1f8u, arg3 + edi);
    g->edx = sp0 - 0x1ccu;
    t8 = rd32(sp0 - 0x1c8u);
    g->esp = sp0 - 0x1dcu;
    t9 = cow_thiscall(g, COW_IMG(0x101ac5e0u), t8, 7, arg3 + edi, arg2 - esi, sp0 - 0x1c4u, 0x1c2u, sp0 - 0x1ccu, arg5, arg6);
    t10 = g->ecx;
    t11 = g->edx;
    if ((int32_t)t9 < 0)
    {
        edx = t11;
        goto L_101aca9e;
    }
    eax = t9;
    ecx = t10;
    edx = t11;
    if ((int32_t)(eax + esi) >= (int32_t)arg2) goto L_101aca9e;
    edi = eax + esi;
    wr32(sp0 - 0x1e0u, eax);
    wr32(sp0 - 0x1e4u, sp0 - 0x1c4u);
    wr32(sp0 - 0x1e8u, arg1 + esi);
    g->edx = sp0 - 0x1c4u;
    g->esp = sp0 - 0x1dcu;
    cow_call_regs(g, COW_IMG(0x10312090u), arg1, g->ecx, g->edx, 1, 3, arg1 + esi, sp0 - 0x1c4u, eax);
    t12 = g->edx;
    edx = t12;
    esi = edi;
    edi = rd32(sp0 - 0x1ccu);
    goto L_101aca94;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ac990(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101ac990(g);
    g->esp = sp0;
    rt_return(g, r, 24u);
}
/* COW_ADAPTER END */
