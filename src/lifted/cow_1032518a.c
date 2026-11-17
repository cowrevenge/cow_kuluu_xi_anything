/* f_0x1032518a - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_1032518a(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
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
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 48u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, self);
    wr32(sp0 - 0xcu, self);
    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    wr32(sp0 - 8u, arg2);
    wr32(sp0 - 0x1cu, COW_IMG(0x109f8410u));
    g->eax = arg2;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    t1 = cow_stdcall(g, rd32(COW_IMG(0x10329198u)), 1, COW_IMG(0x109f8410u));   /* kernel32.dll!InterlockedIncrement */
    t2 = g->ecx;
    t3 = g->edx;
    if (rd32(COW_IMG(0x109f840cu)) == 0u)
    {
        ecx = t2;
        edx = t3;
        ebx = rd32(COW_IMG(0x10329194u));
        wr32(sp0 - 0xcu, 0u);
        loc_c = 0u;
    }
    else
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        ebx = rd32(COW_IMG(0x10329194u));
        wr32(sp0 - 0x1cu, COW_IMG(0x109f8410u));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t4 = cow_thiscall(g, ebx, ecx, 1, COW_IMG(0x109f8410u));
        t5 = g->ecx;
        t6 = g->edx;
        wr32(sp0 - 0x1cu, 0x13u);
        g->ebx = ebx;
        g->esp = sp0 - 0x10u;
        cow_call_regs(g, COW_IMG(0x1031d016u), g->eax, t5, t6, 1, 3, 0x13u, in_edi, in_esi);
        t7 = g->edx;
        wr32(sp0 - 0xcu, 1u);
        ecx = 0x13u;
        edx = t7;
        loc_c = 1u;
    }
    if (rd32(sp0 + 0x14u) != 0u)
    {
        eax = rd32(sp0 + 0x14u);
    }
    else
    {
        eax = rd32(COW_IMG(0x103d3814u));
    }
    wr32(sp0 + 0x14u, eax);
    if (arg2 == 0u)
    {
        loc_8 = arg2;
    }
    else
    {
        esi = arg3;
        loc_8 = arg2;
L_103251e2: ;
        if (rd8(esi) == 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(esi);
            goto L_10325256;
        }
        eax = (eax & 0xffffff00u) | rd8(esi);
        if ((uint8_t)eax == 0x25u)
        {
            wr32(COW_IMG(0x109f82d4u), 0u);
            if (rd8(esi + 1u) != 0x23u)
            {
                esi = esi + 1u;
            }
            else
            {
                esi = esi + 1u;
                wr32(COW_IMG(0x109f82d4u), 1u);
                esi = esi + 1u;
            }
            t10 = rd32(sp0 + 0x14u);
            wr32(sp0 - 0x1cu, t10);
            wr32(sp0 - 0x20u, sp0 - 8u);
            wr32(sp0 - 0x24u, sp0 + 4u);
            wr32(sp0 - 0x28u, arg4);
            t11 = (sp0 + 4u & 0xffffff00u) | rd8(esi);
            wr32(sp0 - 0x2cu, t11);
            g->ebx = ebx;
            g->eax = t11;
            g->esp = sp0 - 0x18u;
            t12 = cow_call_regs(g, COW_IMG(0x10325284u), g->eax, ecx, edx, 1, 5, t11, arg4, sp0 + 4u, sp0 - 8u, t10);
            t13 = g->ecx;
            t14 = g->edx;
            eax = t12;
            ecx = t13;
            edx = t14;
            esi = esi + 1u;
            loc_c = rd32(sp0 - 0xcu);
            loc_8 = rd32(sp0 - 8u);
        }
        else
        {
            if ((rd8((uint8_t)eax * 2u + rd32(COW_IMG(0x103d0030u)) + 1u) & 0x80u) == 0u)
            {
                edx = rd32(COW_IMG(0x103d0030u));
            }
            else
            {
                edx = rd32(COW_IMG(0x103d0030u));
                if (loc_8 > 1u)
                {
                    wr8(rd32(sp0 + 4u), (uint8_t)eax);
                    wr32(sp0 + 4u, rd32(sp0 + 4u) + 1u);
                    wr32(sp0 - 8u, loc_8 - 1u);
                    esi = esi + 1u;
                    loc_8 = loc_8 - 1u;
                }
            }
            t8 = rd8(esi);
            t9 = rd32(sp0 + 4u);
            wr8(t9, (uint8_t)t8);
            wr32(sp0 + 4u, rd32(sp0 + 4u) + 1u);
            wr32(sp0 - 8u, loc_8 - 1u);
            eax = (eax & 0xffffff00u) | t8;
            ecx = t9;
            esi = esi + 1u;
            loc_8 = loc_8 - 1u;
        }
        if (loc_8 != 0u) goto L_103251e2;
    }
L_10325256: ;
    if (loc_c == 0u)
    {
        wr32(sp0 - 0x1cu, COW_IMG(0x109f8410u));
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        cow_thiscall(g, ebx, ecx, 1, COW_IMG(0x109f8410u));
        t16 = g->edx;
        edx = t16;
    }
    else
    {
        wr32(sp0 - 0x1cu, 0x13u);
        g->esp = sp0 - 0x10u;
        cow_call_regs(g, COW_IMG(0x1031d077u), g->eax, ecx, edx, 1, 3, 0x13u, in_edi, in_esi);
        t15 = g->edx;
        edx = t15;
    }
    if (rd32(sp0 - 8u) == 0u)
    {
        ebx = rd32(sp0 - 0x10u);
        esi = rd32(sp0 - 0x14u);
        edi = rd32(sp0 - 0x18u);
        goto L_10325280;
    }
    ebx = rd32(sp0 - 0x10u);
    esi = rd32(sp0 - 0x14u);
    edi = rd32(sp0 - 0x18u);
    wr8(rd32(sp0 + 4u), 0u);
    g->ebx = ebx;
    g->esi = esi;
    g->edi = edi;
    g->ebp = rd32(sp0 - 4u);
    g->edx = edx;
    return arg2 - rd32(sp0 - 8u);
L_10325280: ;
    g->ebx = ebx;
    g->esi = esi;
    g->edi = edi;
    g->ebp = rd32(sp0 - 4u);
    g->edx = edx;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1032518a(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1032518a(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
