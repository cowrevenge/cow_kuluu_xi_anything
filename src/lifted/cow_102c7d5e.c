/* f_0x102c7d5e - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=10 */
void cow_fn_102c7d5e(Guest* g)
{
    double d1;
    double d2;
    uint32_t eax;
    uint32_t edx;
    uint32_t loc_54;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg8 = rd32(g->esp + 0x20u);
    const uint32_t arg9 = rd32(g->esp + 0x24u);
    const uint32_t arg10 = rd32(g->esp + 0x28u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg1 != 0u)
    {
        if (arg2 != 0u)
        {
            if ((int32_t)arg3 < 0)
            {
                edx = in_edx;
                goto L_102c7f19;
            }
            if ((int32_t)arg4 < 0)
            {
                edx = in_edx;
                goto L_102c7f19;
            }
            if ((int32_t)arg5 < 0)
            {
                edx = in_edx;
                goto L_102c7f19;
            }
            if ((int32_t)arg6 < 0)
            {
                edx = in_edx;
                goto L_102c7f19;
            }
            if ((int32_t)arg7 < 0)
            {
                edx = in_edx;
                goto L_102c7f19;
            }
            if ((int32_t)arg8 < 0)
            {
                edx = in_edx;
                goto L_102c7f19;
            }
            if ((int32_t)arg9 < 0)
            {
                edx = in_edx;
                goto L_102c7f19;
            }
            if ((int32_t)arg10 < 0)
            {
                edx = arg10;
                goto L_102c7f19;
            }
            if ((cow_fsw(g, (double)(int32_t)arg3, rdf64(COW_IMG(0x103433e0u)), 1u) >> 8u & 0x41u) == 0u)
            {
                eax = (uint16_t)cow_fsw(g, (double)(int32_t)arg3, rdf64(COW_IMG(0x103433e0u)), 1u);
                x0 = rdf64(COW_IMG(0x103433e0u));
                goto L_102c7f10;
            }
            eax = (uint16_t)cow_fsw(g, (double)(int32_t)arg3, rdf64(COW_IMG(0x103433e0u)), 1u);
            x0 = rdf64(COW_IMG(0x103433e0u));
            if ((cow_fsw(g, (double)(int32_t)arg4, x0, 1u) >> 8u & 0x41u) == 0u)
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)(int32_t)arg4, x0, 1u);
                goto L_102c7f10;
            }
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)(int32_t)arg4, x0, 1u);
            if ((cow_fsw(g, (double)(int32_t)arg5, x0, 1u) >> 8u & 0x41u) == 0u)
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)(int32_t)arg5, x0, 1u);
                goto L_102c7f10;
            }
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)(int32_t)arg5, x0, 1u);
            if ((cow_fsw(g, (double)(int32_t)arg6, x0, 1u) >> 8u & 0x41u) == 0u)
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)(int32_t)arg6, x0, 1u);
                goto L_102c7f10;
            }
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)(int32_t)arg6, x0, 1u);
            if ((cow_fsw(g, (double)(int32_t)arg7, x0, 1u) >> 8u & 0x41u) == 0u)
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)(int32_t)arg7, x0, 1u);
                goto L_102c7f10;
            }
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)(int32_t)arg7, x0, 1u);
            if ((cow_fsw(g, (double)(int32_t)arg8, x0, 1u) >> 8u & 0x41u) == 0u)
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)(int32_t)arg8, x0, 1u);
                goto L_102c7f10;
            }
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)(int32_t)arg8, x0, 1u);
            if ((cow_fsw(g, (double)(int32_t)arg9, x0, 1u) >> 8u & 0x41u) == 0u)
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)(int32_t)arg9, x0, 1u);
                goto L_102c7f10;
            }
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)(int32_t)arg9, x0, 1u);
            if ((cow_fsw(g, (double)(int32_t)arg10, x0, 0u) >> 8u & 0x41u) == 0u)
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)(int32_t)arg10, x0, 0u);
                goto L_102c7f12;
            }
            d1 = fr(g, (double)(int32_t)arg3 * rdf64(COW_IMG(0x10340b28u)));
            d2 = rdf64(COW_IMG(0x10340b28u));
            wrf32(arg2 + 0x80u, (float)d1);
            wrf32(arg2 + 0x84u, (float)fr(g, (double)(int32_t)arg4 * d2));
            wrf32(arg2 + 0x88u, (float)fr(g, (double)(int32_t)arg5 * d2));
            wrf32(arg2 + 0x8cu, (float)fr(g, (double)(int32_t)arg6 * d2));
            wr32(arg2 + 8u, rd32(arg2 + 8u) | 4u);
            wrf32(arg2 + 0x90u, (float)fr(g, (double)(int32_t)arg7 * d2));
            wrf32(arg2 + 0x94u, (float)fr(g, (double)(int32_t)arg8 * d2));
            wr32(arg2 + 0x100u, arg3);
            wrf32(arg2 + 0x98u, (float)fr(g, (double)(int32_t)arg9 * d2));
            wr32(arg2 + 0x104u, arg4);
            wrf32(arg2 + 0x9cu, (float)fr(g, (double)(int32_t)arg10 * d2));
            wr32(arg2 + 0x108u, arg5);
            wr32(arg2 + 0x10cu, arg6);
            wr32(arg2 + 0x110u, arg7);
            wr32(arg2 + 0x114u, arg8);
            wr32(arg2 + 0x118u, arg9);
            wr32(arg2 + 0x11cu, arg10);
        }
    }
L_102c7f28: ;
    return;
L_102c7f10: ;
L_102c7f12: ;
    edx = arg10;
    loc_54 = COW_IMG(0x103c9640u);
L_102c7f1e: ;
    g->esp = sp0 - 0x50u;
    cow_cdecl(g, COW_IMG(0x102bca0au), 2, arg1, loc_54);
    goto L_102c7f28;
L_102c7f19: ;
    eax = 0u;
    loc_54 = COW_IMG(0x103c960cu);
    goto L_102c7f1e;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102c7d5e(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102c7d5e(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
