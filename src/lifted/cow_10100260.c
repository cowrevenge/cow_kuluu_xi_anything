/* f_0x10100260 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Adds a byte value to the bytes at offsets 0x2b and 0x2c of a structure.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=3 */
uint32_t cow_fn_10100260(Guest* g, uint32_t self, uint32_t unused, uint32_t addend)
{
    (void)unused;

    /* 10100264: mov cl, byte ptr [esp + 0xc] */
    g->ecx = (g->ecx & 0xFFFFFF00u) | (uint8_t)addend;

    /* 10100268: mov dl, byte ptr [eax + 0x2b] */
    /* 1010026b: add dl, cl */
    /* 1010026d: mov byte ptr [eax + 0x2b], dl */
    {
        uint8_t b = rd8(self + 0x2Bu);
        uint8_t r = (uint8_t)(b + (uint8_t)addend);
        g->edx = (g->edx & 0xFFFFFF00u) | r;
        wr8(self + 0x2Bu, r);
    }

    /* 10100270: mov dl, byte ptr [eax + 0x2c] */
    /* 10100273: add dl, cl */
    /* 10100275: mov byte ptr [eax + 0x2c], dl */
    {
        uint8_t b = rd8(self + 0x2Cu);
        uint8_t r = (uint8_t)(b + (uint8_t)addend);
        g->edx = (g->edx & 0xFFFFFF00u) | r;
        wr8(self + 0x2Cu, r);
    }

    /* eax is left as the first stack argument */
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10100260(Guest* g)
{
    const uint32_t sp0 = g->esp;

    const uint32_t self = rd32(sp0 + 4u);
    const uint32_t addend = rd8(sp0 + 0xCu);

    const uint32_t result = cow_fn_10100260(g, self, 0u, addend);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
