/* f_0x10098710 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10098710(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((rd16(arg3 + 0x84u) << 4u) + 0x10u > 0x80u)
    {
        ecx = (rd16(arg3 + 0x84u) << 4u) + 0x10u;
        edx = in_edx;
    }
    else
    {
        eax = rd16(arg3 + 0x84u) << 4u;
        cf = (rd16(arg3 + 0x84u) << 4u) + 0x10u < 0x80u;
        pf = PARITY((uint8_t)((rd16(arg3 + 0x84u) << 4u) - 0x70u));
        zf = rd16(arg3 + 0x84u) << 4u == 0x70u;
        sf = (int32_t)((rd16(arg3 + 0x84u) << 4u) - 0x70u) < 0;
        of = (((rd16(arg3 + 0x84u) << 4u) + 0x10u ^ 0x80u) & ((rd16(arg3 + 0x84u) << 4u) + 0x10u ^ (rd16(arg3 + 0x84u) << 4u) - 0x70u)) >> 0x1fu;
        eax = COW_IMG(0x104800b8u) + eax * 4u;
        edx = arg3 + 0x44u;
        edi = 0x10u;
L_10098741: ;
        t1 = rd32(edx - 0x40u);
        wr32(eax - 0x200u, t1);
        if (((uint16_t)rd32(COW_IMG(0x104802b8u)) & 1u << (rd8(arg3 + 0x84u) & 0x1fu)) != 0u)
        {
            t2 = rd32(eax) | (~rd32(eax + 0x204u) & rd32(edx));
            wr32(eax, t2);
        }
        else
        {
            wr32(eax, rd32(edx));
        }
        t3 = rd32(edx);
        wr32(eax + 0x204u, t3);
        if (edi != 1u)
        {
            edx = edx + 4u;
            cf = eax + 4u < eax;
            eax = eax + 4u;
            pf = PARITY((uint8_t)(edi - 1u));
            zf = edi == 1u;
            sf = (int32_t)(edi - 1u) < 0;
            of = edi == 0x80000000u;
            edi = edi - 1u;
            goto L_10098741;
        }
        ecx = t3;
        edx = edx + 4u;
        if (rd16(COW_IMG(0x104802bau)) == 0u)
        {
            pf = PARITY((uint8_t)rd16(COW_IMG(0x104802bau)));
            zf = rd16(COW_IMG(0x104802bau)) == 0u;
            sf = (int16_t)rd16(COW_IMG(0x104802bau)) < 0;
            t4 = rd8(arg3 + 0x84u);
            wr16(COW_IMG(0x104802bau), 1u);
            wr16(COW_IMG(0x104802b8u), (uint16_t)(rd16(COW_IMG(0x104802b8u)) | 1u << (t4 & 0x1fu)));
            ecx = (ecx & 0xffffff00u) | t4;
            edx = 1u << (t4 & 0x1fu);
        }
    }
    if (rd32(COW_IMG(0x104804bcu)) == 0u)
    {
        eax = rd32(COW_IMG(0x104804bcu));
    }
    else
    {
        eax = rd32(COW_IMG(0x104804bcu));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0;
        t5 = cow_thiscall(g, eax, ecx, 0);
        t6 = g->edx;
        eax = t5;
        edx = t6;
    }
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10098710(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10098710(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
