/* f_0x101f7ec0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=6 */
void cow_fn_101f7ec0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 48u);

    if (rd32(COW_IMG(0x105781f8u)) != 0u)
    {
        eax = rd32(COW_IMG(0x105781f8u));
        wr32(sp0 - 4u, 4u);
        g->esp = sp0;
        cow_thiscall(g, COW_IMG(0x10221300u), eax + 0x20u, 1, 4u);
    }
    wr32(sp0 - 4u, in_ebx);
    wr32(sp0 - 8u, in_ebp);
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    if (rd32(COW_IMG(0x104dfd98u)) == 0u) goto L_101f7fce;
    eax = rd32(COW_IMG(0x104dfd98u));
    if (rd32(COW_IMG(0x10663888u)) == 0u) goto L_101f7fce;
    if (rd32(eax + 0x3c390u) == arg3) goto L_101f7fce;
    if (rd32(eax + 0x3c350u) != (uint32_t)(int16_t)arg1) goto L_101f7fce;
    wr32(sp0 - 0x14u, arg6);
    wr32(sp0 - 0x18u, arg5);
    wr32(sp0 - 0x1cu, arg4);
    g->eax = arg4;
    g->edx = arg5;
    t1 = rd32(COW_IMG(0x10631f24u));
    t2 = rd16(sp0 + 8u);
    g->esp = sp0 - 0x10u;
    t3 = cow_thiscall(g, COW_IMG(0x101811d0u), t1, 3, arg4, arg5, arg6);
    t4 = g->ecx;
    t5 = g->edx;
    if (t3 != (uint32_t)(int16_t)t2) goto L_101f7fce;
    eax = t3;
    ecx = t4;
    edx = t5;
    edi = (uint32_t)(int16_t)t2;
    wr32(sp0 - 0x14u, 5u);
    wr8(sp0 + 8u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t6 = cow_thiscall_cdecl(g, COW_IMG(0x100e8b80u), ecx, 1, 5u);
    t7 = g->ecx;
    t8 = g->edx;
    g->edx = t8;
    t9 = rd8(t6 + 0x34u);
    t10 = cow_stdcall(g, COW_IMG(0x100e8c70u), 0);
    t11 = g->edx;
    if (t10 == 0u) goto L_101f7fce;
    edx = t11;
    ebx = (in_ebx & 0xffffff00u) | (t9 & 3u);
    esi = t10;
L_101f7f5c: ;
    if (rd32(esi + 0x14u) == arg3) goto L_101f7f77;
    eax = rd32(esi + 0x14u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t12 = cow_stdcall(g, COW_IMG(0x100e8c70u), 0);
    t13 = g->edx;
    if (t12 != 0u)
    {
        edx = t13;
        esi = t12;
        goto L_101f7f5c;
    }
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->ebp = rd32(sp0 - 8u);
    return;
L_101f7f77: ;
    if ((rd32(esi + 0x34u) & 3u) == (uint8_t)ebx)
    {
        wr8(sp0 + 8u, 1u);
    }
    wr32(sp0 - 0x14u, arg6);
    wr32(sp0 - 0x18u, arg4);
    wr32(sp0 - 0x1cu, sp0 + 4u);
    wr32(sp0 - 0x20u, sp0 + 0xcu);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, edi);
    wr32(sp0 - 0x2cu, (uint32_t)(int16_t)arg1);
    g->ebx = ebx;
    g->eax = (uint32_t)(int16_t)arg1;
    g->esp = sp0 - 0x20u;
    t14 = cow_call_regs(g, COW_IMG(0x101f7430u), g->eax, sp0 + 4u, sp0 + 0xcu, 1, 3, (uint32_t)(int16_t)arg1, edi, 0u);
    t15 = g->ecx;
    t16 = g->edx;
    wr32(sp0 - 0x24u, t14);
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x101f7570u), 3, t14, sp0 + 0xcu, sp0 + 4u);
    t17 = rd32(sp0 + 8u);
    wr32(sp0 - 0x14u, t17);
    wr32(sp0 - 0x18u, esi + 2u);
    wr32(sp0 - 0x1cu, arg1);
    wr32(sp0 - 0x20u, arg3);
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x101f9110u), t17, rd32(COW_IMG(0x10663888u)), g->edx, 0, 4, arg3, arg1, esi + 2u, t17);
L_101f7fce: ;
    g->ebx = in_ebx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f7ec0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101f7ec0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
