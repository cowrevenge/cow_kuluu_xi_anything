/* f_0x101e4e50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101e4e50(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
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
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 0xcu, in_ebp);
    wr32(sp0 - 0x10u, sp0 - 8u);
    t1 = (self & 0xffffff00u) | rd8(self + 0x894u);
    wr32(sp0 - 0x14u, t1);
    wr32(sp0 - 8u, 0u);
    g->edx = in_edx;
    t2 = rd32(sp0 - 4u);
    g->esp = sp0 - 8u;
    t3 = cow_thiscall_cdecl(g, COW_IMG(0x101e4ca0u), t1, 3, t1, sp0 - 8u, in_ebp);
    t4 = g->edx;
    if ((uint8_t)t3 == 0u)
    {
        eax = t3;
        edx = t4;
        goto L_101e4f75;
    }
    wr32(sp0 - 0x10u, sp0 - 4u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, arg2 + 0x40u);
    g->edx = sp0 - 4u;
    g->esp = sp0 - 0xcu;
    t5 = cow_cdecl(g, COW_IMG(0x101e4ce0u), 3, arg2 + 0x40u, 0u, sp0 - 4u);
    t6 = g->edx;
    if ((uint8_t)t5 == 0u)
    {
        eax = t5;
        edx = t6;
        goto L_101e4f75;
    }
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    if (rd8(arg2 + (uint8_t)rd32(sp0 - 4u) + 0x3cu) > 3u)
    {
        eax = rd8(arg2 + (uint8_t)rd32(sp0 - 4u) + 0x3cu);
        edx = (uint8_t)rd32(sp0 - 4u);
        goto L_101e4ecb;
    }
    eax = rd8(arg2 + (uint8_t)rd32(sp0 - 4u) + 0x3cu);
    edx = (uint8_t)rd32(sp0 - 4u);
    t7 = rd32(COW_IMG(0x101e4f80u) + eax * 4u);
    switch (t7 - RD)
    {
    case 0x101e4ebdu: goto L_101e4ebd;
    case 0x101e4ec4u: goto L_101e4ec4;
    case 0x101e4ecbu: goto L_101e4ecb;
    default: rt_fatal(g, COW_IMG(0x101e4eb6u), "switch");
    }
    return 0;
L_101e4ebd: ;
    edi = 0x202u;
L_101e4ed0: ;
    if (rd32(COW_IMG(0x10664494u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10664494u));
        if ((rd8(arg2 + 0x34u) & 0x10u) != 0u)
        {
            wr32(sp0 - 0x18u, 0x80808080u);
            t8 = rd32(arg2 + 0x38u);
            wr32(sp0 - 0x1cu, t8);
            g->edx = edx;
            g->esp = sp0 - 0x18u;
            t9 = cow_thiscall(g, COW_IMG(0x1020b4b0u), ecx, 1, t8);
            t10 = g->edx;
            wr32(sp0 - 0x1cu, t9);
            wr32(sp0 - 0x20u, 0xeu);
            wr32(sp0 - 0x24u, 2u);
            g->esp = sp0 - 0x14u;
            t11 = cow_fastcall(g, COW_IMG(0x101f4b20u), arg1, t10, 4, 2u, 0xeu, t9, 0x80808080u);
            t12 = g->edx;
            eax = t11;
            edx = t12;
        }
    }
    wr32(sp0 - 0x18u, 0x80808080u);
    wr32(sp0 - 0x1cu, edi);
    wr32(sp0 - 0x20u, 0x15u);
    wr32(sp0 - 0x24u, 0u);
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t13 = cow_fastcall(g, COW_IMG(0x101f4b20u), arg1, edx, 4, 0u, 0x15u, edi, 0x80808080u);
    t14 = g->edx;
    wr32(sp0 - 0x18u, 0x80808080u);
    wr32(sp0 - 0x1cu, arg2 + 4u);
    wr32(sp0 - 0x20u, 0x10u);
    wr32(sp0 - 0x24u, 1u);
    t15 = cow_fastcall(g, COW_IMG(0x101f4b20u), arg1, t14, 4, 1u, 0x10u, arg2 + 4u, 0x80808080u);
    t16 = g->edx;
    wr32(sp0 - 0x18u, 0x80808080u);
    wr32(sp0 - 0x1cu, arg2 + 4u);
    wr32(sp0 - 0x20u, 0x29u);
    wr32(sp0 - 0x24u, 3u);
    t17 = cow_fastcall(g, COW_IMG(0x101f4b20u), arg1, t16, 4, 3u, 0x29u, arg2 + 4u, 0x80808080u);
    t18 = g->edx;
    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = t17;
        edx = t18;
    }
    else
    {
        ecx = rd32(COW_IMG(0x104dfd98u));
        if (rd32(ecx + 0x3c350u) == rd16(arg2 + 0x2cu))
        {
            eax = rd16(arg2 + 0x2cu);
            edx = rd32(ecx + 0x3c350u);
        }
        else
        {
            eax = rd16(arg2 + 0x2cu);
            edx = rd32(ecx + 0x3c350u);
            wr32(sp0 - 0x18u, 0x80808080u);
            wr32(sp0 - 0x1cu, 0u);
            wr32(sp0 - 0x20u, eax);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t19 = cow_cdecl(g, COW_IMG(0x101cbc10u), 4, eax, 0u, 0x80808080u, rd32(sp0 - 0x14u));
            t20 = g->edx;
            wr32(sp0 - 0x1cu, t19);
            wr32(sp0 - 0x20u, 0x23u);
            wr32(sp0 - 0x24u, 4u);
            g->esp = sp0 - 0x14u;
            t21 = cow_fastcall(g, COW_IMG(0x101f4b20u), arg1, t20, 4, 4u, 0x23u, t19, 0x80808080u);
            t22 = g->edx;
            eax = t21;
            edx = t22;
        }
    }
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->ebp = rd32(sp0 - 0xcu);
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_101e4ec4: ;
    edi = 0x203u;
    goto L_101e4ed0;
L_101e4ecb: ;
    edi = 0x201u;
    goto L_101e4ed0;
L_101e4f75: ;
    g->edx = edx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e4e50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e4e50(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
