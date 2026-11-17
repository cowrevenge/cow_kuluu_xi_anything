/* f_0x102f8262 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102f8262(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_14;
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
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, self);
    wr32(sp0 - 0xcu, self);
    wr32(sp0 - 0x10u, in_esi);
    if (rd32(arg1 + 0x58u) & 1u)
    {
        eax = rd32(arg1 + 0x58u);
        goto L_102f8279;
    }
    eax = rd32(arg1 + 0x58u);
    wr32(sp0 - 0x14u, COW_IMG(0x10348b50u));
L_102f828e: ;
    wr32(sp0 - 0x18u, arg1);
    g->esi = arg1;
    g->esp = sp0 - 0x14u;
    cow_fastcall(g, COW_IMG(0x102ef234u), self, in_edx, 1, arg1);
    rt_fatal(g, COW_IMG(0x102f828fu), "no way on");
L_102f8279: ;
    if ((eax & 4u) == 0u) goto L_102f8285;
    wr32(sp0 - 0x14u, COW_IMG(0x10348b38u));
    wr32(sp0 - 0x18u, arg1);
    ecx = self;
    edx = in_edx;
    loc_14 = COW_IMG(0x10348b38u);
L_102f82b6: ;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x10u;
    t3 = cow_call_regs(g, COW_IMG(0x102ef252u), g->eax, g->ecx, edx, 1, 2, arg1, loc_14);
    t4 = g->ecx;
    t5 = g->edx;
    wr32(sp0 - 0x1cu, arg3);
    wr32(sp0 - 0x20u, arg1);
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x102f7fe0u), g->eax, g->ecx, t5, 1, 5, arg1, arg3, arg1, rd32(sp0 - 0x14u), in_esi);
    t6 = g->edx;
    edx = t6;
    ebx = in_ebx;
    edi = in_edi;
L_102f8389: ;
    g->ebx = ebx;
    g->esi = rd32(sp0 - 0x10u);
    g->edi = edi;
    g->ebp = rd32(sp0 - 4u);
    g->edx = edx;
    return;
L_102f8285: ;
    if ((eax & 2u) == 0u) goto L_102f8296;
    wr32(sp0 - 0x14u, COW_IMG(0x10348b20u));
    goto L_102f828e;
L_102f8296: ;
    wr32(sp0 - 0x14u, 3u);
    t1 = cow_divu(g, arg3, 3u);
    t2 = cow_modu(g, arg3, 3u);
    wr32(arg1 + 0x58u, rd32(arg1 + 0x58u) | 2u);
    if (t2 == 0u) goto L_102f82d3;
    eax = t1;
    edx = t2;
    wr32(sp0 - 0x14u, COW_IMG(0x10348b08u));
    wr32(sp0 - 0x18u, arg1);
    if (rd8(arg1 + 0x116u) == 3u) goto L_102f82cc;
    ecx = 3u;
    loc_14 = COW_IMG(0x10348b08u);
    goto L_102f82b6;
L_102f82cc: ;
    g->esi = arg1;
    g->esp = sp0 - 0x18u;
    cow_fastcall(g, COW_IMG(0x102ef234u), 3u, edx, 0);
    rt_fatal(g, COW_IMG(0x102f82ccu), "no way on");
L_102f82d3: ;
    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_edi);
    wr32(sp0 - 0x1cu, 3u);
    t7 = cow_divs(g, arg3, 3u);
    t8 = cow_mods(g, arg3, 3u);
    wr32(sp0 - 0x1cu, 3u);
    wr32(sp0 - 0x20u, t7);
    wr32(sp0 - 0x24u, arg1);
    g->eax = t7;
    g->ecx = 3u;
    g->edx = t8;
    g->esp = sp0 - 0x10u;
    t9 = cow_cdecl(g, COW_IMG(0x102f2089u), 5, arg1, t7, 3u, in_edi, in_ebx);
    t10 = g->ecx;
    t11 = g->edx;
    wr8(arg1 + 0x5du, rd8(arg1 + 0x5du) | 0x10u);
    wr32(sp0 - 0xcu, t9);
    if ((int32_t)t7 <= 0)
    {
        eax = t9;
        ecx = t10;
        edx = t11;
        ebx = t7;
        loc_c = t9;
    }
    else
    {
        eax = t9;
        ecx = t10;
        edx = t11;
        ebx = t7;
        loc_c = t9;
        wr32(sp0 - 8u, ebx);
        edi = eax + 2u;
        loc_8 = ebx;
L_102f82fc: ;
        wr32(sp0 - 0x1cu, 3u);
        wr32(sp0 - 0x20u, sp0 + 4u);
        wr32(sp0 - 0x24u, arg1);
        g->eax = sp0 + 4u;
        g->ecx = ecx;
        g->esp = sp0 - 0x10u;
        t12 = cow_call_regs(g, COW_IMG(0x102f7710u), g->eax, g->ecx, edx, 1, 5, arg1, sp0 + 4u, 3u, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
        t13 = g->ecx;
        t14 = g->edx;
        wr8(edi - 2u, (uint8_t)arg1);
        wr8(edi - 1u, (uint8_t)(arg1 >> 8u));
        wr8(edi, (uint8_t)(arg1 >> 0x10u));
        t15 = rd32(sp0 - 8u) - 1u;
        wr32(sp0 - 8u, t15);
        if (rd32(sp0 - 8u) != 1u)
        {
            ecx = t13;
            edx = t14;
            edi = edi + 3u;
            loc_c = rd32(sp0 - 0xcu);
            loc_8 = t15;
            goto L_102f82fc;
        }
        eax = (t12 & 0xffffff00u) | (uint8_t)(arg1 >> 0x10u);
        ecx = t13;
        edx = t14;
        loc_c = rd32(sp0 - 0xcu);
    }
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, arg1);
    g->ecx = ecx;
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x102f7fe0u), g->eax, g->ecx, edx, 1, 5, arg1, 0u, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u), rd32(sp0 - 0x10u));
    t16 = g->ecx;
    t17 = g->edx;
    wr32(sp0 - 0x24u, ebx);
    t18 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x28u, t18);
    wr32(sp0 - 0x2cu, arg2);
    wr32(sp0 - 0x30u, arg1);
    wr32(arg1 + 0x104u, t18);
    wr16(arg1 + 0x108u, (uint16_t)ebx);
    g->eax = t18;
    g->ecx = t16;
    g->edx = t17;
    g->esp = sp0 - 0x20u;
    t19 = cow_cdecl(g, COW_IMG(0x102f1ebdu), 4, arg1, arg2, t18, ebx);
    t20 = g->ecx;
    t21 = g->edx;
    if (rd8(arg1 + 0x116u) != 3u)
    {
        edx = t21;
    }
    else
    {
        eax = t19;
        ecx = t20;
        edx = t21;
        if (arg2 != 0u)
        {
            if ((rd8(arg2 + 8u) & 0x10u) != 0u)
            {
                if (rd16(arg1 + 0x10au) > rd16(arg1 + 0x108u))
                {
                    eax = (eax & 0xffff0000u) | rd16(arg1 + 0x10au);
                    wr32(sp0 - 0x1cu, COW_IMG(0x10348ae0u));
                    wr32(sp0 - 0x20u, arg1);
                    g->eax = eax;
                    g->esp = sp0 - 0x18u;
                    t22 = cow_call_regs(g, COW_IMG(0x102ef252u), g->eax, g->ecx, edx, 1, 2, arg1, COW_IMG(0x10348ae0u));
                    t23 = g->edx;
                    wr16(arg1 + 0x10au, rd16(arg1 + 0x108u));
                    edx = t23;
                }
            }
        }
    }
    ebx = rd32(sp0 - 0x14u);
    edi = rd32(sp0 - 0x18u);
    goto L_102f8389;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f8262(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102f8262(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
