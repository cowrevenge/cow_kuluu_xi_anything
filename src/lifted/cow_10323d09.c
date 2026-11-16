/* f_0x10323d09 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10323d09(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 292u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x110u, in_ebx);
    if (rd32(sp0 + 4u) == 0u) goto L_10323d6e;
    ebx = rd32(sp0 + 4u);
    wr32(sp0 - 0x114u, ebx);
    g->eax = in_eax;
    g->esp = sp0 - 0x108u;
    t1 = cow_call_regs(g, COW_IMG(0x10323ddeu), g->eax, self, in_edx, 1, 3, ebx, in_ebx, rd32(sp0 - 0x10cu));
    t2 = g->edx;
    if (t1 != 0u)
    {
        ecx = rd32(sp0 - 0x114u);
        edx = t2;
        goto L_10323d40;
    }
    eax = t1;
    ecx = rd32(sp0 - 0x114u);
    edx = t2;
    g->eax = eax;
    g->esp = sp0 - 0x110u;
    t3 = cow_fastcall(g, COW_IMG(0x10319c92u), ecx, edx, 0);
    t4 = g->ecx;
    t5 = g->edx;
    wr32(t3, 0xfu);
    g->edx = t5;
    t6 = cow_stdcall(g, COW_IMG(0x10319c89u), 0);
    t7 = g->edx;
    wr32(t6, 0xdu);
    edx = t7;
L_10323d3b: ;
    eax = 0u;
L_10323d3d: ;
    g->ebx = rd32(sp0 - 0x110u);
    g->ebp = rd32(sp0 - 4u);
    g->edx = edx;
    return eax;
L_10323d40: ;
    wr8(sp0 + 7u, 0u);
    wr32(sp0 - 0x114u, sp0 - 8u);
    wr32(sp0 - 0x118u, sp0 - 0x10cu);
    wr32(sp0 - 0x11cu, 0x104u);
    wr32(sp0 - 0x120u, sp0 + 4u);
    wr8(sp0 + 4u, (uint8_t)((uint8_t)ebx + 0x40u));
    wr8(sp0 + 5u, 0x3au);
    wr8(sp0 + 6u, 0x2eu);
    g->eax = sp0 + 4u;
    g->edx = edx;
    g->esp = sp0 - 0x110u;
    t8 = cow_thiscall(g, rd32(COW_IMG(0x103290d4u)), ecx, 4, sp0 + 4u, 0x104u, sp0 - 0x10cu, sp0 - 8u);
    t9 = g->edx;
    eax = t8;
    edx = t9;
L_10323d80: ;
    if (eax == 0u) goto L_10323d3b;
    if (eax + 1u > 0x104u) goto L_10323d3b;
    eax = eax + 1u;
    if (arg2 != 0u) goto L_10323db5;
    if ((int32_t)eax <= (int32_t)arg3)
    {
        eax = arg3;
    }
    wr32(sp0 - 0x114u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x108u;
    t12 = cow_cdecl(g, COW_IMG(0x10312fd6u), 3, eax, rd32(sp0 - 0x110u), rd32(sp0 - 0x10cu));
    t13 = g->edx;
    if (t12 != 0u)
    {
        ecx = t12;
        edx = t13;
        goto L_10323dca;
    }
    eax = t12;
    ecx = t12;
    edx = t13;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x110u;
    t14 = cow_stdcall(g, COW_IMG(0x10319c89u), 0);
    t15 = g->edx;
    wr32(t14, 0xcu);
    edx = t15;
    goto L_10323d3b;
L_10323d6e: ;
    wr32(sp0 - 0x114u, sp0 - 0x10cu);
    wr32(sp0 - 0x118u, 0x104u);
    g->eax = sp0 - 0x10cu;
    g->edx = in_edx;
    g->esp = sp0 - 0x110u;
    t10 = cow_thiscall(g, rd32(COW_IMG(0x10329118u)), self, 2, 0x104u, sp0 - 0x10cu);
    t11 = g->edx;
    eax = t10;
    edx = t11;
    goto L_10323d80;
L_10323db5: ;
    if ((int32_t)eax <= (int32_t)arg3)
    {
        ecx = arg2;
        goto L_10323dca;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x110u;
    t16 = cow_stdcall(g, COW_IMG(0x10319c89u), 0);
    t17 = g->edx;
    wr32(t16, 0x22u);
    edx = t17;
    goto L_10323d3b;
L_10323dca: ;
    wr32(sp0 - 0x114u, sp0 - 0x10cu);
    wr32(sp0 - 0x118u, ecx);
    g->eax = sp0 - 0x10cu;
    g->esp = sp0 - 0x10cu;
    t18 = cow_call_regs(g, COW_IMG(0x10317500u), g->eax, g->ecx, edx, 1, 3, ecx, sp0 - 0x10cu, rd32(sp0 - 0x110u));
    t19 = g->edx;
    eax = t18;
    edx = t19;
    goto L_10323d3d;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10323d09(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10323d09(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
